/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:42:41 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/26 12:31:05 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
uguale a dest != null*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (j + size);
	while (src[k] && (i + k) < (size - 1))
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
int	main()
{
	char s1[10] = "abcd";
	char s2[10] = "abc";
	char s3[10] = "abcd";
	char s4[10] = "abc";
	printf("%u\n", ft_strlcat(s3, s4, 8));
	printf("%s\n", s3);
	printf("%lu\n", strlcat(s1, s2, 8));
	printf("%s", s1);
}*/
