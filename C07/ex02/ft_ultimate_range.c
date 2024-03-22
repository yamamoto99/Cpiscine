/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:44:38 by masayama          #+#    #+#             */
/*   Updated: 2024/03/17 15:47:26 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	min;
// 	int	max;

// 	min = 5;
// 	max = 10;
// 	int	size = (ft_ultimate_range(&range, min, max));
// 	printf("size : %d\n", size);
// 	for (int i = 0; i < size; i++){
// 		printf("%d\n", range[i]);
// 	}
// }