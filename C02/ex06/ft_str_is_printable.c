/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:04:56 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/24 16:19:37 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str [i] <= 126)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf( "%d\n", ft_str_is_printable("abc!,"));
	printf( "%d\n", ft_str_is_printable(" "));
}*/
