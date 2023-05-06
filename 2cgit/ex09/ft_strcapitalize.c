/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:08:12 by analexan          #+#    #+#             */
/*   Updated: 2023/02/06 17:53:18 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

int	ft_str_is_alphanumeric(char str)
{
	if (str < '0' || (str > '9' && str < 'A')
		|| (str > 'Z' && str < 'a') || str > 'z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!ft_str_is_alphanumeric(str[i - 1]) && ft_str_is_lowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
// if theres non alfanumeric 1º and then non upcase alphabetic char 2º
// -> put alpha upcase
#include <stdio.h>

int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("Before: %s\n", str);
	ft_strcapitalize(str);
	printf("_After: %s\n", str);
	return (0);
}
*/
