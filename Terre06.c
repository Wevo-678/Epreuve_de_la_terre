#include <unistd.h>
#include <stdio.h>

char *reverse(char *str)
{
	char	c;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		i++;
		len++;	
	}
	while (len - 1 >= 0)
	{
		write(1,&str[len - 1],1);
		len--;
	}
}
int	main(int ac, char **av)
{
	char	*str;
	if (ac == 2)
	{
		reverse(av[1]);

	}
	else
		write(1, "erreur.", 7);
}
