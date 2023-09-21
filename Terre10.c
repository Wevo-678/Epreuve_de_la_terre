#include <stdio.h>
#include <stdlib.h>

int 	prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i < nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);

}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (prime(atoi(av[1])) == 0) 
			printf("Non, %s n'est pas un nombre premier.", av[1]);
		if (prime(atoi(av[1])) == 1)
			printf("Oui, %s est un nombre premier.", av[1]);

	}
	else 
		printf("error.");
}	
