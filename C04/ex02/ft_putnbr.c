/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:27:16 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 18:24:30 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <limits.h>

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

// int	main(void)
// {
// 	ft_putnbr(INT_MAX);
// 	ft_putnbr(INT_MIN);
// }
