/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:10:56 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:46:46 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != 0 && *s2 != 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[] = "123";
// 	char b[] = "123";
// 	char c[] = "12";
// 	char d[] = "121";
// 	char e[] = "";
// 	char f[] = "";

// 	printf("---------ft_strcmp---------\n");
// 	printf("[123] [123] -> %d\n", ft_strcmp(a, b));
// 	printf("[123] [12]  -> %d\n", ft_strcmp(a, c));
// 	printf("[123] [121] -> %d\n", ft_strcmp(a, d));
// 	printf("[12]  [123] -> %d\n", ft_strcmp(c, a));
// 	printf("[121] [123] -> %d\n", ft_strcmp(d, a));
// 	printf("[123] []    -> %d\n", ft_strcmp(a, e));
// 	printf("[]    [123] -> %d\n", ft_strcmp(e, a));
// 	printf("[]    []    -> %d\n", ft_strcmp(e, f));
// 	printf("---------strcmp---------\n");
// 	printf("[123] [123] -> %d\n", strcmp(a, b));
// 	printf("[123] [12]  -> %d\n", strcmp(a, c));
// 	printf("[123] [121] -> %d\n", strcmp(a, d));
// 	printf("[12]  [123] -> %d\n", strcmp(c, a));
// 	printf("[121] [123] -> %d\n", strcmp(d, a));
// 	printf("[123] []    -> %d\n", strcmp(a, e));
// 	printf("[]    [123] -> %d\n", strcmp(e, a));
// 	printf("[]    []    -> %d\n", strcmp(e, f));
// }
