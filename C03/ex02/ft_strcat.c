/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:33:12 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/25 20:02:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	k;
	int	l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (src[l] != '\0')
	{
		dest[k] = src [l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[] = "ciao";
	char	src[] = "wo";
	printf("%s", ft_strcat(dest, src));
}*/
