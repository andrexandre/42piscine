/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:34:10 by analexan          #+#    #+#             */
/*   Updated: 2023/04/14 17:29:03 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(src));
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "howdy";

	printf("Str: %s\nDstr: %s", str, ft_strdup(str));
	return (0);
}
*/