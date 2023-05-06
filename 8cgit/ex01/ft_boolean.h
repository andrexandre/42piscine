/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:52:02 by analexan          #+#    #+#             */
/*   Updated: 2023/02/15 12:09:05 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
typedef	int	t_bool;
char	EVEN_MSG[] = "I have an even number of arguments.\n";
char	ODD_MSG[] = "I have an odd number of arguments.\n";
int		TRUE = 1;
int		FALSE = 0;
int	EVEN(int nb)
{
	if (nb % 2 != 0)
		return (1);
	else
		return (0);
}
int		SUCCESS = 0;
#endif