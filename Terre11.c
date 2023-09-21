#include <stdio.h>
#include <stdlib.h>
char *to(char *str)
{
	char	*res; 
	res = (char *)malloc(8 * sizeof(char));
	if (!res)
		return (0);
	if (str[0] == '0' && str[1] != '0')
	{//de 01.00 a 09. 59 
		res[0] = str[0];
		res[1] = str[1];
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'A';
		res[6] = 'M';
		res[7] = '\0';
	}
	if (str[0] == '0' && str[1] == '0')
	{// minuit
		res[0] = '1';
		res[1] = '2';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'A';
		res[6] = 'M';
		res[7] = '\0';
	}
	if (str[0] == '1' && str[1] <= '1')
	{// de 10.00 a 11.59
		res[0] = str[0];
		res[1] = str[1];
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'A';
		res[6] = 'M';
		res[7] = '\0';
	}
		if (str[0] == '1' && str[1] == '2')
	{// midi
		res[0] = str[0];
		res[1] = str[1];
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'P';
		res[6] = 'M';
		res[7] = '\0';
	}
		if (str[0] == '1' && str[1] >= '3')
	{ // 13.00 19.59
		res[0] =  '0';
		res[1] = str[1] - 2;
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'P';
		res[6] = 'M';
		res[7] = '\0';
	}
	if (str[0] == '2' && str[1] == '4')
	{ //minuit
		res[0] = '1';
		res[1] = '2';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'A';
		res[6] = 'M';
		res[7] = '\0';
	}if (str[0] == '2' && str[1] == '0' && str[1] != '4')
	{ //20.00 23.59
		res[0] = '0';
		res[1] = '8';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'P';
		res[6] = 'M';
		res[7] = '\0';
	}if (str[0] == '2' && str[1] == '1' && str[1] != '4')
	{ //2 1
		res[0] = '0';
		res[1] = '9';
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'P';
		res[6] = 'M';
		res[7] = '\0';
	}
	if (str[0] == '2' && str[1] >= '2' && str[1] != '4')
	{ //22.00 23.59
		res[0] = '1';
		res[1] = str[1]  - 2;
		res[2] = str[2];
		res[3] = str[3];
		res[4] = str[4];
		res[5] = 'P';
		res[6] = 'M';
		res[7] = '\0';
	}
		return (res);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][2] == ':' && av[1][5] == '\0')
		{
			printf("%s", to(av[1]));
		}
		else
			printf("Heure non conforme.");
	}
	else 
		printf("erreur d'argument.");
}