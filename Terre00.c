#include <unistd.h>

int	main(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		write(1, &i,1);
		i++;
	}
}
