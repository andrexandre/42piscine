/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:40:55 by analexan          #+#    #+#             */
/*   Updated: 2023/02/15 13:10:19 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		temp *= nb;
		power--;
	}
	return (temp);
}
/*
#include <stdio.h>
int main (void)
{
	printf("Result: %i", ft_iterative_power(2, 4));
	return (0);
}
*/