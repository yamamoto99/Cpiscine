/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:02:12 by masayama          #+#    #+#             */
/*   Updated: 2024/03/12 16:05:57 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long	count;

	count = 2;
	if (nb < 2)
		return (2);
	while (count * count <= nb)
	{
		if (nb % count == 0)
			return (ft_find_next_prime(nb + 1));
		count++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(-1));
// }
