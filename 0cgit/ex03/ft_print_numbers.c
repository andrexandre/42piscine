/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:59:47 by analexan          #+#    #+#             */
/*   Updated: 2023/02/01 20:01:16 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}

*/