/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:44:09 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:38:00 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*str_head;

	str_head = str;
	while (*str != 0)
	{
		if ('A' <= *str && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str_head);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[10] = "ABCDEFGHI";
// 	printf("str to upper case : %s\n", ft_strlowcase(str));
// }