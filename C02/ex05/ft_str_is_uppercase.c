/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:25:18 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:42:40 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (!('A' <= *str && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Only upper alphabets : %d\n", ft_str_is_uppercase("HFKASHFIDFKJE"));
// 	printf("Not only upper alphabets : %d\n", ft_str_is_uppercase("fkhjtykjk"));
// 	printf("Empty string : %d\n", ft_str_is_uppercase(""));
// }