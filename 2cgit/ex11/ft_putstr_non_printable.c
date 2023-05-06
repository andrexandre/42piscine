/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:08:12 by analexan          #+#    #+#             */
/*   Updated: 2023/02/06 16:27:16 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		write(1, "\\00", 3);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &("0123456789abcdef"[str[i] / 16]), 1);
			write(1, &("0123456789abcdef"[str[i] % 16]), 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Ola\nesta bem?";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}
*/