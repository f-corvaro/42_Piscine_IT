#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_rev_print(char	*str)
{
	int	i;
	int	n;

	n = 0;
	i = ft_strlen(str) -1;
	while (i >= n)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);
}
/*
int	main()
{
	ft_rev_print("ciao");
	return (0);
}*/
