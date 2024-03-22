/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:56:07 by masayama          #+#    #+#             */
/*   Updated: 2024/03/22 10:00:30 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	is_sort(int a, int b)
// {
// 	if (a == b)
// 		return (0);
// 	else
// 		return (a - b);
// }

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a[] = {1, 2, 3, 4, 5};
// 	printf("%d\n", ft_is_sort(a, 5, &is_sort));
// }
