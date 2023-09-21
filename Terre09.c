#include <stdio.h>
#include <stdlib.h>
int ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i >= 46341)
				return (0);
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

int main(int ac, char **av)
{
	int rep;

	if (ac == 2)
	{
		rep = ft_sqrt(atoi(av[1]));
		printf("%d", rep);
	}
}
