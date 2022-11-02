#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		f;
	char	temp;

	i = 0;
	f = ft_strlen(str) - 1;
	while (i <= f)
	{
		temp = str[i];
		str[i] = str[f];
		str[f] = temp;
		i++;
		f--;
	}
	return (str);
}

int	main()
{
	char	c[] = "prova";
	char	*n;

	n = ft_strrev(c);
	printf("%s", n);
	return (0);
}
