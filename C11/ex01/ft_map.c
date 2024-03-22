/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:02:37 by masayama          #+#    #+#             */
/*   Updated: 2024/03/22 10:00:14 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

// int	nbr(int nbr)
// {
// 	return (nbr);
// }

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = (int *)malloc(sizeof(int) * length);
	if (!res)
		return (0);
	i = 0;
	while (length--)
		res[i++] = f(*tab++);
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	int	tab[5] = {1, 2, 3, 4, 5};
// 	int *a = ft_map(tab, 5, &nbr);
// 	int length = 5;
// 	int i = 0;
// 	while (length--)
// 	{
// 		printf("%d\n", a[i]);
// 		i++;
// 	}
// }