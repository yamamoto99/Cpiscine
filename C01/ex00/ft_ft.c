/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:31 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 11:00:50 by masayama         ###   ########.fr       */
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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int	nbr;
// 	int	*p_nbr;

// 	nbr = 0;
// 	p_nbr = &nbr;
// 	ft_putnbr(nbr);
// 	ft_ft(p_nbr);
// 	ft_putnbr(nbr);
// }
