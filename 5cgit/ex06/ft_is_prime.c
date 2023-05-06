/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:38:53 by analexan          #+#    #+#             */
/*   Updated: 2023/02/14 19:44:29 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
// Exemplo, são 2, 3, 5, 7 e 11
#include <stdio.h>
int	main(void)
{
	int num = 5;
	printf("%i is prime? %i\n", num, ft_is_prime(num));
	return (0);
}
*/