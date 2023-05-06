/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:56:08 by analexan          #+#    #+#             */
/*   Updated: 2023/02/11 19:07:02 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	mc;
	int	n;

	i = 0;
	mc = 1;
	n = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			mc *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (n * mc);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	str[] = "-1234ab567";
	
	printf("Str: %s\n", str);
	printf("ReF: %i\n", atoi(str));
	printf("MyF: %i\n", ft_atoi(str));
	return (0);
}
*/