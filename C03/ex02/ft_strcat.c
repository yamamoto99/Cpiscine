/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:47:31 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:46:55 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_head;

	dest_head = dest;
	while (*dest != 0)
		dest++;
	while (*src != 0)
		*dest++ = *src++;
	*dest = 0;
	return (dest_head);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[9] = "1234";
// 	char b[5] = "5678";
// 	char c[9] = "1234";
// 	char d[5] = "5678";
// 	printf("----ft_strcmp----\n");
// 	printf("%s\n", ft_strcat(a, b));
// 	printf("----strcmp----\n");
// 	printf("%s\n", strcat(c, d));
// }