/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analexan <analexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:56:37 by analexan          #+#    #+#             */
/*   Updated: 2023/02/14 16:40:48 by analexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	blen;

	blen = ft_strlen(base);
	if (haserror(base, blen))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < blen)
	{
		ft_putchar(base[nbr]);
	}
	if (nbr >= blen)
	{
		ft_putnbr_base(nbr / blen, base);
		ft_putnbr_base(nbr % blen, base);
	}
}
/**/
int	main(void)
{
	int		num = 10;
	char	nbase[] = "0123456789ABCDEF";

	ft_putnbr_base(num, nbase);
	return (0);
}
