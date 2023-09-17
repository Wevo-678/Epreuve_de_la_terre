#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	line_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			return(1);
		i++;
	}
	return (0);
}
int	main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac == 2 && line_check(av[1]) == 0)
	       printf("%d", ft_strlen(av[1]));
	else
		write(1, "erreur.", 7);
}
