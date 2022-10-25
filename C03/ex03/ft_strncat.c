/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:10:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/25 20:23:48 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	k;
	unsigned int	l;

	k = 0;
	l = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (l < nb && src[l] != '\0')
	{
		dest[k + l] = src [l];
		l++;
	}
	dest[k + l] = '\0';
	return (dest);
}
/*
int	main()
{
	unsigned int	nb = 1;
	char	dest[] = "ciao";
	char	src[] = "wo";
	printf("%s", ft_strncat(dest, src, nb));
}*/
