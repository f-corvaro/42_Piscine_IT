#include <unistd.h>

void	ft_fizzbuzz(void)
{
	int		i;
	char	c;

	i = 1;
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
            write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else 
		{
			if ( i <= 9)
			{
				c = i + 48;
				write(1, &c, 1);
			}
			else
			{
				c = (i / 10) + 48;
				write(1, &c, 1);
				c = (i % 10) + 48;
				write(1, &c, 1);
			}
			write(1, "\n", 1);
		}
		i++;
	}
}

int	main()
{
	ft_fizzbuzz();
	return (0);
}
