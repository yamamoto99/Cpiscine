/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:49:24 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 11:16:32 by masayama         ###   ########.fr       */
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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	x;
// 	int	y;
// 	int	*div;
// 	int	*mod;

// 	a = 10;
// 	b = 3;
// 	div = &x;
// 	div = &y;
// 	ft_putnbr(a);
// 	ft_putnbr(b);
// }
