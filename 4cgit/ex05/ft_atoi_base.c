/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:42:12 by analexan          #+#    #+#             */
/*   Updated: 2023/02/16 18:56:18 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	haserror(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] > 8
				&& base[i] < 14))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	blen;

	blen = ft_strlen(base);
	if (haserror(base, blen))
		return (0);
	(void)str;
	/*
	// ft_atoi
	i = 0;
	mc = 1;
	n = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			mc *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (n * mc);*/
	return (0);
}
/*
// DOESN'T WORK
int	main(void)
{
	char	num[] = "-12ab";
	char	nbase[] = "0123456789ABCDEF";

	ft_atoi_base(num, nbase);
	return (0);
}
*/
/*
Right one
#include <stdio.h>
int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		negative;
	int		nb;
	int		nb2;
	int		begin_len;

	nb = 0;
	i = 0;
	begin_len = checkerror(base);
	if (begin_len >= 2)
	{
		negative = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}
*/