#include <stdlib.h>
#include <stdio.h>
char *to24(char *str)
{
    char *res;
    res = (char *)malloc(6 * sizeof(char));
    
    if (str[5] == 'A' && str[1] == '2' && str[0] == '1')
    {
        res[0] = '0';
		res[1] = '0';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = '\0';
    }
    else if (str[5] == 'A')
    {
        res[0] = str[0];
		res[1] = str[1];
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = '\0';
    }
    else if (str[5] == 'P' && str[1] == '8')
    {
        res[0] = '2';
		res[1] = '0';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = '\0';
    }
	else if (str[5] == 'P' && str[1] == '9')
    {
        res[0] = '2';
		res[1] = '1';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = '\0';
    }
	else if (str[5] == 'P' && str[1] == '2' && str[0] == '1')
    {
        res[0] = str[0];
		res[1] = str[1];
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = '\0';
    }
	else if (str[5] == 'P' && (str[1] != '8' || str[1] != '9'))
    {
        res[0] = str[0] + 1;
		res[1] = str[1] + 2 ;
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = '\0';
    }
	return(res);

}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][2] == ':' && av[1][6] == 'M')
		{
			printf("%s", to24(av[1]));
		}
		else
			printf("Heure non conforme.");
	}
	else 
		printf("erreur d'argument.");
}