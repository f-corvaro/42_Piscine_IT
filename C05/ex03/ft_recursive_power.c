/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:45:04 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/31 17:49:24 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb);
}
/*
int main()
{
	printf("%d", ft_recursive_power(3,-2));
}*/
