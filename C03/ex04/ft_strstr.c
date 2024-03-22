/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:56:20 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 21:39:47 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		s1 = str;
		s2 = to_find;
		while ((*s1 == *s2) && *s1 != 0)
		{
			s1++;
			s2++;
			if (*s2 == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	a[] = "abcdefghijklm";
// 	char	b[] = "klm";
// 	printf("----ft_strstr----\n");
// 	printf("%s\n", ft_strstr(a, b));
// 	printf("----strstr----\n");
// 	printf("%s\n", strstr(a, b));
// }