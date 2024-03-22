/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:18:57 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:42:22 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (!('a' <= *str && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Only loewr alphabets : %d\n", ft_str_is_lowercase("ksgkj"));
// 	printf("Not only loewr alphabets : %d\n", ft_str_is_lowercase("fHk"));
// 	printf("Empty string : %d\n", ft_str_is_lowercase(""));
// }