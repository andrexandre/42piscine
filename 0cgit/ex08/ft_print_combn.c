/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:07:41 by analexan          #+#    #+#             */
/*   Updated: 2023/02/02 10:03:28 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_arr(char arr[], int arr_size, int lastdgt)
{
	int	i;

	i = 0;
	while (i < arr_size)
		ft_putchar(arr[i++]);
	if (arr[0] != lastdgt)
		write(1, ", ", 2);
}

void	too_many_lines(char arr[], int flag, int num, int base)
{
	while (flag < num)
	{
		flag++;
		base++;
		arr[flag] = base;
	}
}

/*
flag is usefull to find the value that you want to change.
a flag comeca no 3(num) e depois vai diminuindo e verificando
se a array é o mesmo numero que a array max, se for diminui a flag
a base aumenta o numero da array na posiçao flag
*/
void	ft_print_combn(int num)
{
	int		i;
	int		flag;
	int		base;
	char	arr[10];
	char	maxarr[10];

	i = 0;
	if (num < 1 || num > 9)
		return ;
	while (i < num)
	{
		arr[i] = i + 48;
		maxarr[i] = (10 - num) + i + 48;
		i++;
	}
	ft_print_arr(arr, num, maxarr[0]);
	while (arr[0] != maxarr[0])
	{
		flag = num - 1;
		while (arr[flag] == maxarr[flag])
			--flag;
		base = ++(arr[flag]);
		too_many_lines(arr, flag, num, base);
		ft_print_arr(arr, num, maxarr[0]);
	}
}
/*
int	main(void)
{
	ft_print_combn(3);
}

*/