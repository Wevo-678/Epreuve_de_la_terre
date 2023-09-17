#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int ft_pow(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int main(int ac, char **av)
{
	if ( ac == 3 && atoi(av[2]) > 0)
	{
		printf("%d", ft_pow(atoi(av[1]), atoi(av[2])));
	}
	else 
		write(1,"erreur.",7);
}
