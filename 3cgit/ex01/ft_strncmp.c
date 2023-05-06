/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:20:16 by analexan          #+#    #+#             */
/*   Updated: 2023/02/07 14:27:18 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	us1;
	unsigned char	us2;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	us1 = s1[i];
	us2 = s2[i];
	return (us1 - us2);
}
// n - 1 because its comparing not copying so it wont compare '\0'
