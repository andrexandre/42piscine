/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:14:25 by analexan          #+#    #+#             */
/*   Updated: 2023/02/06 17:43:03 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (ft_strlen(src));
}
/*

#include <stdio.h>

int	main(void)
{
	char	str[] = "LARGER";
	char	dstr[5];
	int	size = 5;
	int	a;

	printf("str: %s\n", str);
	a = ft_strlcpy(dstr, str, size);
	printf("dstr: %s\nLenght: %d\n", dstr, a);
	return (0);
}*/
// prints 1 less than size because strlcpy does that and then '\0'
// https://developer.apple.com/library/archive/documentation/
// Security/Conceptual/SecureCodingGuide/Art/stringcopy.gif