/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:25:57 by masayama          #+#    #+#             */
/*   Updated: 2024/03/12 16:04:56 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
		res *= nb--;
	return (res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(3));
// }