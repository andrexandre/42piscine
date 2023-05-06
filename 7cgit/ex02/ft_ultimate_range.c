/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:58:22 by analexan          #+#    #+#             */
/*   Updated: 2023/02/13 17:38:01 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	else
	{
		i = min;
		*range = malloc((max - min) * sizeof(int));
		if (!*range)
			return (-1);
		while (i < max)
		{
			range[0][i - min] = i;
			i++;
		}
		return (max - min);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0, min = -3, max = 5;
	int	*intarr;
	int **ptrtoarr = &intarr;

	printf("min: %i, max: %i, size: %d\n"
	, min, max, ft_ultimate_range(ptrtoarr, min, max));
	printf("intarr:");
	while (i < max - min)
	{
		printf(" %i", intarr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/