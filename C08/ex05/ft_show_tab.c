/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:15:23 by masayama          #+#    #+#             */
/*   Updated: 2024/03/18 19:24:37 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar(*str++);
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
