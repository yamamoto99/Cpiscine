/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:33:15 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 15:11:56 by masayama         ###   ########.fr       */
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

// void	ft_rev_int_tab(int *tab, int size)
// {
// 	int	nbr;
// 	int	*p_nbr;
// 	int	count;

// 	p_nbr = &nbr;
// 	count = 1;
// 	while (size > 0)
// 	{
// 		nbr = *tab % 10
// 	}
// 	nbr[count] = 0;
// 	tab = p_nbr;
// }

// int	main(void)
// {
// 	int a = 12345;
// 	int *x = &a;
// 	ft_rev_int_tab(x, 5);
// 	ft_putnbr(a);
// }