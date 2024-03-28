/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:56:07 by masayama          #+#    #+#             */
/*   Updated: 2024/03/27 11:06:03 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sort(int a, int b)
{
	if (a == b)
		return (0);
	else
		return (a - b);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (tab[i] == tab[i + 1])
		i++;
	if (f(tab[i], tab[i + 1]) > 0)
		flag = 1;
	else
		flag = -1;
	while (i < length - 1)
	{
		if (flag == 1 && f(tab[i], tab[i + 1]) < 0)
			return (0);
		else if (flag == -1 && f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	a[] = {5, 4, 3, 2, 1};
	printf("%d\n", ft_is_sort(a, 5, &is_sort));
}
