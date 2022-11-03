#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	k;

	if (ac == 2)
	{
		k = ft_strlen(av[1]) - 1;
		while (av[1][k] == ' ' || av[1][k] == '\t')
			k--;
		while (av[1][k] >= 33 && av[1][k] <= 126)
			k--;
		k++;
		while ((av[1][k] != 32 && av[1][k] != '\t') && av[1][k])
		{
			write(1, &av[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
