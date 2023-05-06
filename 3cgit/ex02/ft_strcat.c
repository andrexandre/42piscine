/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:02:49 by analexan          #+#    #+#             */
/*   Updated: 2023/02/07 14:28:10 by analexan         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dlen;
	int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "Howdy";
	char	dstr[] = "not_howdy";

	ft_strcat(dstr, str);
	ft_putstr(dstr);
	return (0);
}
*/