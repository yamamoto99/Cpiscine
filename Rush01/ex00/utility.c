/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genomoto <genomoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:50:14 by genomoto          #+#    #+#             */
/*   Updated: 2024/03/17 13:31:09 by genomoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchr(*str);
		str++;
	}
}

void	ft_putnbr(int nbr)
{
	char	c;

	c = '0' + nbr;
	ft_putchr(c);
}
