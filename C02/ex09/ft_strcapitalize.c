/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:15:59 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 13:34:22 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*str_head;

	str_head = str;
	if ('a' <= *str && *str <= 'z')
		*str++ -= 32;
	while (*str != 0)
	{
		if (!(('a' <= *str && *str <= 'z') || ('0' <= *str && *str <= '9')))
		{
			str++;
			if ('a' <= *str && *str <= 'z')
				*str++ -= 32;
		}
		else if ('A' <= *str && *str <= 'Z')
			*str++ += 32;
		else
			str++;
	}
	return (str_head);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", str);
// 	printf("%s\n", ft_strcapitalize(str));
// }