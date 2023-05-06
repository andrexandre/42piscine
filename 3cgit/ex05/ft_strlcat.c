/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:02:49 by analexan          #+#    #+#             */
/*   Updated: 2023/02/11 19:05:51 by analexan         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	if (size < dlen)
		return (slen + size);
	while (src[i - dlen] != '\0' && i < size - 1)
	{
		dest[i] = src[i - dlen];
		i++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}
/*
#include <stdio.h>
#include <string.h>
// function has to be tested without -w -w -w (-lbsd)
int	main(void)
{
	char	str[] = "Howdy";
	char	sstr[] = "Howdy";
	char	dstr[] = "not_howdy";
	char	ddstr[] = "not_howdy";

	printf("OF, String: %s\nLenght: %u\n", dstr, ft_strlcat(dstr, str, 20));
	printf("RF, String: %s\nLenght: %u\n", ddstr, strlcat(ddstr, sstr, 20));
	return (0);
}
*/