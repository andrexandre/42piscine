/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:31:44 by analexan          #+#    #+#             */
/*   Updated: 2023/02/15 13:28:52 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	swap(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap(argv, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		while (argv[i][0])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
