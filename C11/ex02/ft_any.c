/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:23:28 by masayama          #+#    #+#             */
/*   Updated: 2024/03/22 10:00:24 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	is_empty(char *str)
// {
// 	if (*str == 0)
// 		return (1);
// 	return (0);
// }

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *a[] = {"aaa", "bbb", "ccc", NULL};
// 	printf("%d\n", ft_any(a, &is_empty));
// }