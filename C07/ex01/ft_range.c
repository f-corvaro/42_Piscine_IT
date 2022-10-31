/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:47:34 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/31 15:33:52 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*harry;

	i = 0;
	size = max - min;
	harry = malloc(size * sizeof(int));
	if (min >= max)
		return (harry);
	if (!harry)
		return (0);
	while (i < size)
	{
		harry[i] = min + i;
		i++;
	}
	return (harry);
}
/*add printf("%d", harry[i]) in the cycle while
int	main()
{
	ft_range(1, 3);
	return 0;
}*/
