/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:24:57 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 10:50:08 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(32);
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	if (x != 98)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print_number(x, y);
			y++;
		}
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
