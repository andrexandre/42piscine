/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:46:02 by analexan          #+#    #+#             */
/*   Updated: 2023/02/09 12:39:35 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 1)
		nb = nb * i--;
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	int nr = 5;
	printf("Factorial of %i = %i", nr, ft_iterative_factorial(nr));
	return (0);
}
*/