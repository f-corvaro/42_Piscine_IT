/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:44:33 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/20 09:35:53 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
	return ;
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "CiaoCiao";
	int		count = ft_strlen(str);
	count = count + '0';
	ft_putchar(count);
}
*/
