/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:11:03 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:41:48 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Only alphabets : %d\n", ft_str_is_alpha("iofoaihjfshf"));
// 	printf("Not only : %d\n", ft_str_is_alpha("jhfds4ws"));
// 	printf("Empty string : %d\n", ft_str_is_alpha(""));
// }