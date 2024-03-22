/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:32:07 by masayama          #+#    #+#             */
/*   Updated: 2024/03/12 10:01:06 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	count;

	count = 0;
	if (nb < 0)
		nb *= -1;
	while (count * count <= nb)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(-2147395600));
// }