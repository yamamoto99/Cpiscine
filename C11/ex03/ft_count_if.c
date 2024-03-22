/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:05:31 by masayama          #+#    #+#             */
/*   Updated: 2024/03/22 10:00:27 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	is_empty(char *str)
// {
// 	if (*str == 0)
// 		return (1);
// 	return (0);
// }

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab[] = {"aaaa", "", ""};
// 	printf("%d\n", ft_count_if(tab, 3, &is_empty));
// }