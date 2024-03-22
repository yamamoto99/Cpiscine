/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:45:07 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 11:03:14 by masayama         ###   ########.fr       */
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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// int	main(void)
// {
// 	int	nbr = 0;
// 	int	*a;
// 	int	**b;
// 	int	***c;
// 	int	****d;
// 	int	*****e;
// 	int	******f;
// 	int	*******g;
// 	int	********h;
// 	int	*********i;

// 	a = &nbr;
// 	b = &a;
// 	c = &b;
// 	d = &c;
// 	e = &d;
// 	f = &e;
// 	g = &f;
// 	h = &g;
// 	i = &h;
// 	ft_putnbr(nbr);
// 	ft_ultimate_ft(i);
// 	ft_putnbr(nbr);
// }
