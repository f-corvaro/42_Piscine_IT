#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[ac-1][i] && ac > 0)
	{
		if (ac == 1)
			break;
		else
		{
			write(1, &av[ac-1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
