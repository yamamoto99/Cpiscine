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

int	is_alphanumeric_character(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c
			&& c <= '9'))
		return (1);
	return (0);
}

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if (!is_alphanumeric_character(str[i]))
		{
			if ('a' <= str[i + 1] && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 
// 	42mots quaRAnte-deux; cinquante+et+un";
// 	printf("%s\n", str);
// 	printf("%s\n", ft_strcapitalize(str));
// }