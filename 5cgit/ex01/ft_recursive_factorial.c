/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:46:02 by analexan          #+#    #+#             */
/*   Updated: 2023/02/09 12:40:22 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int nr = 5;
	printf("Factorial of %i = %i", nr, ft_recursive_factorial(nr));
	return (0);
}
*/