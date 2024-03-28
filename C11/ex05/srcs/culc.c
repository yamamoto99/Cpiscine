/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   culc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:58:04 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:06:16 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
}

void	subtract(int a, int b)
{
	ft_putnbr(a - b);
}

void	multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	divide(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero", 24);
		return ;
	}
	ft_putnbr(a / b);
}

void	modulus(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ft_putnbr(a % b);
}
