#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int i;
    int count;
    i = 1;
    count = 0;
    while (i < ac)
    {
        if (atoi(av[i])  == 0)
            {
                printf("Erreur");
                return (0);
            }
        i++;
    }

    i = 2;
    while (i  < ac)
    {
        
        if (atoi(av[i - 1]) < atoi(av[i]))
        {
            count++; 
        }
        i++;
    }
    if (count == ac - 2)
        printf("triée !");
    else 
        printf("Pas triée !");
}