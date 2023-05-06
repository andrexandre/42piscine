/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:37:48 by analexan          #+#    #+#             */
/*   Updated: 2023/02/08 14:54:07 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
/*
#include <stdio.h>

int	main(void)
{
	char sstr[] = "mason\n";

	ft_putstr(sstr);
	return (0);
}
*/