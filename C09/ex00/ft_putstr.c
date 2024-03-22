/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:21:22 by masayama          #+#    #+#             */
/*   Updated: 2024/03/20 17:32:36 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_a(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar_a(*str++);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "1234567";
// 	ft_putstr(a);
// }
