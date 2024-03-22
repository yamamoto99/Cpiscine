/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:57:56 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/09 14:07:24 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_put_middle_rush00(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	ft_put_head_tail_rush00(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	rush00(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (x <= 0 || y <= 0)
		{
			break ;
		}
		else
		{
			if (i == 1 || i == y)
				ft_put_head_tail_rush00(x);
			else
				ft_put_middle_rush00(x);
			ft_putchar('\n');
			i++;
		}
	}
}
