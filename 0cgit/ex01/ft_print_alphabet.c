/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:36:33 by analexan          #+#    #+#             */
/*   Updated: 2023/02/01 19:59:45 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

a = 97 in ascii and then it goes through all the number and ending in z
*/

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}

*/