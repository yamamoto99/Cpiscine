/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:24:12 by masayama          #+#    #+#             */
/*   Updated: 2024/03/16 15:39:47 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*res;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	res = (int *)malloc(sizeof(int) * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		res[i++] = min++;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int min = -2147483648;
// 	int max = -2;
// 	int *ans = ft_range(min, max);
// 	int count = 0;
// 	while (count < max - min)
// 		printf("%d\n", ans[count++]);
// }