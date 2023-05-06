/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:58:22 by analexan          #+#    #+#             */
/*   Updated: 2023/02/13 16:21:13 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*intarr;
	int	i;

	if (min >= max)
		return (0);
	else
	{
		i = min;
		intarr = malloc((max - min) * sizeof(int));
		while (i < max)
		{
			intarr[i - min] = i;
			i++;
		}
		return (intarr);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	i = 0, min = -3, max = 5;
	int	*intarr = ft_range(min, max);

	printf("min: %i, max: %i\n", min, max);
	printf("intarr:");
	while (i < max - min)
	{
		printf(" %d", intarr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/