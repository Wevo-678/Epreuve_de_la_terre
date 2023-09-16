#include <unistd.h>

int	main(int ac, char **av)
{
	char	c;

	if (ac == 2 && av[1][1] == '\0' 
			&& ('a' <= av[1][0] && av[1][0] <= 'z'))
	{	c = av[1][0];
		while (c <= 'z' )
		{	
			write(1, &c, 1);
			c++;
		}
	}
	else
		write(1,"Mauvais arguments", 17);
	write(1,"\n",1);
}
