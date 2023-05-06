/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:37:55 by analexan          #+#    #+#             */
/*   Updated: 2023/02/03 11:50:29 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int *nbr;
// 	int n;
// 	nbr = &n;
// 	ft_ft(nbr);
// 	printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
// 	return (0);
// }