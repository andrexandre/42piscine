/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:49:06 by analexan          #+#    #+#             */
/*   Updated: 2023/02/03 11:53:32 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// 1/2=(0.5)~0
// "hi"; = {'h', 'i', '\0'};
/*
#include <stdio.h>

int	main(void)
{
	int counter = 0;
	int	arr[] = {156, 42, 198};
	int i = 3;

	while (counter < i)
	{
		printf("%d ", arr[counter]);
		counter++;
	}
	printf("\n");
	// execution of function
	ft_rev_int_tab(arr, i);
	counter = 0;
	while (counter < i)
	{
		printf("%d ", arr[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}
*/