/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:48:12 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/20 14:10:57 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}
/*
void    print(int tab[], int size)
{
    int i = 0;
    while (i < size-1)
    {
        printf("%d", tab[i]);
        i++;
    }
}

int    main (void)
{
    int tab[9]={-1,3,7,4,6,5,2,9,0};
    print( tab, 10);
    printf("\n");
    ft_sort_int_tab(tab, 10);
    print( tab, 10);
        return 0;
}
*/
