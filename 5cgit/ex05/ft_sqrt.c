/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:50:24 by analexan          #+#    #+#             */
/*   Updated: 2023/02/15 13:11:16 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	nbr;

	nbr = nb;
	if (nbr < 1)
		return (0);
	if (nbr == 1)
		return (1);
	index = 2;
	if (nbr >= 2)
	{
		while (index * index <= nbr)
		{
			if (index * index == nbr)
				return (index);
			index++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n = 16;

	printf("sqrt(%i): %i", n, ft_sqrt(n));
	return (0);
}
*/