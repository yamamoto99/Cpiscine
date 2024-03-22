/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:51:07 by masayama          #+#    #+#             */
/*   Updated: 2024/03/12 16:05:38 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count * count <= nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(2147483647));
// }