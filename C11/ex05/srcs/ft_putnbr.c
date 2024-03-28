/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:28:52 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:29:41 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

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
	write(1, "\n", 1);
}
