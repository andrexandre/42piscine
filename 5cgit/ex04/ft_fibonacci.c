/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:28:07 by analexan          #+#    #+#             */
/*   Updated: 2023/02/09 14:28:13 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	n = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (n);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
// Fibonacci seq is a seq of nr that are the sum of the two preceding nr. 
// For example, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610
#include <stdio.h>

int	main(void)
{
	printf("Result: %i", ft_fibonacci(3));
	return (0);
}
*/