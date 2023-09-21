#include <stdlib.h>
#include <stdio.h>
int suisse(char *s, char *s1, char *s2)
{
    int tmp;
    int j = 1;
    int a = atoi(s);
    int b = atoi(s1);
    int c = atoi(s2);
    while (j == 1)
    {   j = 0;
        if(a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
            j = 1;
        }
        else if (b > c)
         {
            tmp = b;
            b = c;
            c = tmp;
            j = 1;
        }
    }
    return (b);
}

int main(int ac, char **av)
{
    if (ac == 4 && av[1] != av[2] && av[3] != av[2] && av[1] != av[3])
    {
        int res;
        res = suisse(av[1], av[2], av[3]);
        printf("%d", res);
    }
    else
        printf("Erreur.");
}