/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:40:55 by analexan          #+#    #+#             */
/*   Updated: 2023/02/09 13:25:53 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Result: %i", ft_recursive_power(2, 4));
	return (0);
}
*/