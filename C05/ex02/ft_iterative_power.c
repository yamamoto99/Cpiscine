/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:40:04 by masayama          #+#    #+#             */
/*   Updated: 2024/03/12 16:05:12 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		res *= nb;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(-3, 0));
// }