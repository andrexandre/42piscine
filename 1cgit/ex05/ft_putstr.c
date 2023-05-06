/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:40:52 by analexan          #+#    #+#             */
/*   Updated: 2023/02/03 11:52:30 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// a array ja é um pointer para o inicio da array
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	arr[] = "hello";
	ft_putstr(arr);
	return (0);
}
*/