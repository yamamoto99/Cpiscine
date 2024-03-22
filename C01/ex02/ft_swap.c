/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:38:26 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 11:07:55 by masayama         ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	*a;
// 	int	*b;

// 	x = 10;
// 	y = 42;
// 	a = &x;
// 	b = &y;
// 	ft_putnbr(x);
// 	ft_putnbr(y);
// 	ft_swap(a, b);
// 	ft_putnbr(x);
// 	ft_putnbr(y);
// }
