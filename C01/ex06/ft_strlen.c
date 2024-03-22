/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:24:59 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 14:31:35 by masayama         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	char	a[5] = "oooo";
// 	int		nbr;

// 	nbr = ft_strlen(a);
// 	ft_putnbr(nbr);
// }
