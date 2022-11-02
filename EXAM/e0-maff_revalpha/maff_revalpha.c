#include <unistd.h>

int	main()
{
	char	c1;
	char	c2;

	c1 = 'z';
	c2 = 'Z';

	while (c1 >= 'a' && c2 >= 'A')
	{
		if ((c1 % 2) == 0)
		{
			write(1, &c1, 1);
		}
		else
		{
			write(1, &c2, 1);
		}
		c1--;
		c2--;
	}
	write(1, "\n", 1);
	return (0);
}
