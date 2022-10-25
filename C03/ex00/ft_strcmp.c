/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:17:11 by fcorvaro          #+#    #+#             */
/*   Updated: 2022/10/25 16:45:52 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
/*or || */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("%d", ft_strcmp("ciao", "ciao2"));
	printf("\n%d", ft_strcmp("ciao", "ci"));
	printf("\n%d", ft_strcmp("ci", "ci"));
	printf("\n%d", ft_strcmp("cI", "CI"));
}*/
