/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:08:12 by analexan          #+#    #+#             */
/*   Updated: 2023/02/05 19:35:03 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "ho:wdy";

	int a;
	a = ft_str_is_alpha(str);
	printf("\n%d", a);
	return (0);
}
*/