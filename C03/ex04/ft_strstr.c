/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:05:41 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/26 10:37:24 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	if (to_find[l] == '\0')
		return (str);
	while (str[k] != '\0')
	{
		while (str[k + l] == to_find[l] && str[k + l] != '\0')
			l++;
		if (to_find[l] == '\0')
			return (str + k);
		k++;
		l = 0;
	}
	return (0);
}
/*return (str + k), vuol dire che torna str[k]*/
/*
int	main()
{
	char str[] = "prova";
	char f[] = "o";
	printf("%s", ft_strstr(str, f));
}*/
