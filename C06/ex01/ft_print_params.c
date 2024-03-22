/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:08:54 by masayama          #+#    #+#             */
/*   Updated: 2024/03/12 11:11:28 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar(*str++);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		count++;
	}
}
