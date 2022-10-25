/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:10:35 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/18 10:04:36 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int k, int l)
{
	int	ai;
	int	aj;
	int	bi;
	int	bj;

	ai = ((k / 10) + '0');
	aj = ((k % 10) + '0');
	bi = ((l / 10) + '0');
	bj = ((l % 10) + '0');
	write(1, &ai, 1);
	write(1, &aj, 1);
	write(1, " ", 1);
	write(1, &bi, 1);
	write(1, &bj, 1);
	if (k == 98 && l == 99)
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	k;
	int	l;

	k = 0;
	while (k <= 98)
	{
		l = k + 1;
		while (l <= 99)
		{
			print(k, l);
			l += 1;
		}
		k++;
	}
}
