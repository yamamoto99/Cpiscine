/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:37:17 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:37:54 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*str_head;

	str_head = str;
	while (*str != 0)
	{
		if ('a' <= *str && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (str_head);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[10] = "abcdefghi";
// 	printf("str to upper case : %s\n", ft_strupcase(str));
// }