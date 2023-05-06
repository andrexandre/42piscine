/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:38:36 by analexan          #+#    #+#             */
/*   Updated: 2023/02/15 17:21:51 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		h;
	char	*str;

	i = 0;
	j = 0;
	h = 0;
	str = malloc(size * sizeof(char *));
	while (i < size)
	{
		if (i != 0)
		{
			while (sep[j])
			{
				if (i == size && j == size)
					break ;
				if (sep[j] != '\0')
				{
					str[h] = sep[j];
					h++;
				}
				j++;
			}
			j = 0;
		}
		while (strs[i][j])
		{
			str[h] = strs[i][j];
			j++;
			h++;
		}
		j = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "123";
	char str2[] = "abc";
	char str3[] = "";
	char str4[] = "tal";

	char sep[] = " / ";
	
	char *strs[] = { str1, str2, str3, str4 };

	char *str_final = ft_strjoin(4, strs, sep);

	printf("%s\n", str_final);
	free(str_final);
}
*/