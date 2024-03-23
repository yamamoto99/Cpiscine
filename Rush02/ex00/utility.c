/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 08:49:50 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 11:12:02 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchr(*str);
		str++;
	}
}

void	ft_putnbr_helper(long nb)
{
	long	tmp;

	if (nb < 10)
	{
		nb += 48;
		write(1, &nb, 1);
		return ;
	}
	tmp = nb % 10 + 48;
	nb = nb / 10;
	ft_putnbr_helper(nb);
	write(1, &tmp, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	ft_putnbr_helper(nbr);
}
