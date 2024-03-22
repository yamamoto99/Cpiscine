/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:28:01 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 11:38:50 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putnbr_helper(long nb)
// {
// 	long	tmp;

// 	if (nb < 10)
// 	{
// 		nb += 48;
// 		write(1, &nb, 1);
// 		return ;
// 	}
// 	tmp = nb % 10 + 48;
// 	nb = nb / 10;
// 	ft_putnbr_helper(nb);
// 	write(1, &tmp, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long	nbr;

// 	nbr = (long)nb;
// 	if (nbr < 0)
// 	{
// 		write(1, "-", 1);
// 		nbr = nbr * -1;
// 	}
// 	ft_putnbr_helper(nbr);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	quotient;
	int	remainder;

	quotient = *a / *b;
	remainder = *a % *b;
	*a = quotient;
	*b = remainder;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*x;
// 	int	*y;

// 	a = 10;
// 	b = 3;
// 	x = &a;
// 	y = &b;
// 	ft_putnbr(a);
// 	ft_putnbr(b);
// 	ft_ultimate_div_mod(x, y);
// 	ft_putnbr(a);
// 	ft_putnbr(b);
// }
