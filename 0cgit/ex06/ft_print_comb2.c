/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:52:24 by analexan          #+#    #+#             */
/*   Updated: 2023/02/01 20:03:09 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// '0' means 48, that is the number in ascii
void	too_many_lines(int a, int b)
{
	char	x;
	char	y;

	x = a / 10 + '0';
	y = a % 10 + '0';
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(' ');
	x = b / 10 + '0';
	y = b % 10 + '0';
	ft_putchar(x);
	ft_putchar(y);
	if (a == 98 && b == 99)
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 00;
	b = 01;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				too_many_lines(a, b);
			}
			b++;
		}
		b = 00;
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}

*/