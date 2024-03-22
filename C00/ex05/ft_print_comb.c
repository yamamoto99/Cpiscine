/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:32:58 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 10:51:45 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int x, int xx, int xxx)
{
	char	nbr[5];

	if (x == '7')
	{
		nbr[0] = x;
		nbr[1] = xx;
		nbr[2] = xxx;
		write(1, &nbr, 3);
	}
	else
	{
		nbr[0] = x;
		nbr[1] = xx;
		nbr[2] = xxx;
		nbr[3] = ',';
		nbr[4] = ' ';
		write(1, &nbr, 5);
	}
}

void	ft_print_comb(void)
{
	int		x;
	int		xx;
	int		xxx;

	x = '0';
	while (x <= '7')
	{
		xx = x + 1;
		while (xx <= '8')
		{
			xxx = xx + 1;
			while (xxx <= '9')
			{
				write_nbr(x, xx, xxx);
				xxx++;
			}
			xx++;
		}
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
