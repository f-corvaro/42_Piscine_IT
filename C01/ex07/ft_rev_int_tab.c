/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:41:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/20 11:42:46 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start <= end)
	{
		if (start == end)
			return ;
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start += 1;
		end -= 1;
	}
}
/*
void	print(int tab[], int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int	main (void)
{
	int tab[10]={1,2,3,4,5,6,7,8,9,0};
	print( tab, 10);
	printf("\n");
	ft_rev_int_tab(tab, 10);
	print( tab, 10);
		return 0;
}
*/
