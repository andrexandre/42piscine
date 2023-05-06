/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:08:13 by analexan          #+#    #+#             */
/*   Updated: 2023/02/01 20:03:41 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//the function goes through all the n dividing by 10 till its
//less than 9, prints the first number then goes through
//all modulos and printing them
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr((nb / 10) * -1);
		ft_putnbr((nb % 10) * -1);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
}

*/