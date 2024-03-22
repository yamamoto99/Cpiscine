/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:29:46 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:43:07 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (!(' ' <= *str && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Only display characters : %d\n", ft_str_is_printable("=`.';asc]"));
// 	printf("Not only display characters : %d\n", ft_str_is_printable("2\w\n"));
// 	printf("Empty string : %d\n", ft_str_is_printable(""));
// }