/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:25:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/24 12:00:28 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
/*#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "ciao";
	char	dest[] = "wo";
	char	src1[] = "ciao";
	char	dest1[] = "wo";
	printf("\n%s", ft_strcpy(src, dest));
	printf("\n%s", strcpy(src, dest));
}*/
