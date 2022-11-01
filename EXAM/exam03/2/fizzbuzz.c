#include <unistd.h>

void	printnb(int nb)
{
	char	s;
	char	p;
	int		i;
	int		j;

	i = nb / 10;
	s = i + 48;
	j = nb % 10;
	p = j + 48;
	write(1, &s, 1);
	write(1, &p, 1);
	write(1, "\n", 1);
}

void	fizzbuzz(void)
{
	int		numb;
	char	car;

	numb = 1;
	while (numb <= 20)
	{
		if ((numb % 3) == 0 && (numb % 5) == 0)
			write(1, "fizzbuzz\n", 9);
		else if ((numb % 3) == 0)
			write(1, "fizz\n", 5);
		else if ((numb % 5) == 0)
			write(1, "buzz\n", 5);
		else
		{
			if (numb <= 9)
			{
				car = numb + 48;
				write(1, &car, 1);
				write(1, "\n", 1);
			}
			else
				printnb(numb);
		}
		numb++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
