/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:21:58 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/27 14:23:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*av equivalente a **av
ac contiene il nome del programma
quindi >= 1 sempre*/
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	while (i < ac) 
	{
		write(1, &av[0][i], 1);
		write (1, "\n", 1);
		i++;
	}
	return 0;
}
