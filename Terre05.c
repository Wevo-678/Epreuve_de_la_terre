#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	mod;
	int	div;

	if (ac == 3 && atoi(av[2]) != 0 && atoi(av[1]) > atoi(av[2])) 
	{
		mod = atoi(av[1]) % atoi(av[2]);
		div = atoi(av[1]) / atoi(av[2]);
		printf("résultat : %d \n", div);
                printf("reste : %d \n", mod);
	}
	else 
		write(1, "erreur.", 7);
}
