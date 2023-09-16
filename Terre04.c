#include <unistd.h>
int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || 9 <= str[i] && str[i] <= 13)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9' ) 
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	check_numbers(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9' || str[i] == '-' 
					|| str[i] == '+'))
			return (1);
		i++;
	}
	return(0);

}
int	main(int ac, char **av)
{
	int	nbr;
	if (ac == 2 && check_numbers(av[1]) == 0)
	{
		nbr = ft_atoi(av[1]);
		if (nbr % 2 == 0)
			write(1, "pair", 4);
		else
			write(1, "impair", 6);
	}
	else 
		write(1, "Tu ne me la mettras pas à l'envers.", 36);
} 
