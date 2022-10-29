/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:00:38 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/29 18:50:00 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		write(1, &str[j++], 1);
	return ;
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac > i)
	{
		ft_putstr(av[i++]);
		ft_putstr("\n");
	}
	return (0);
}
