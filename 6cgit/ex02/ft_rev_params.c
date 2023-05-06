/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:09:46 by analexan          #+#    #+#             */
/*   Updated: 2023/02/09 19:19:44 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	while (argc > 1)
	{
		while (argv[argc - 1][0])
			write(1, argv[argc - 1]++, 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
