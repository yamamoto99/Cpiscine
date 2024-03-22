/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:49:46 by masayama          #+#    #+#             */
/*   Updated: 2024/03/20 17:17:43 by masayama         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	int				src_len;
	int				dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	index = 0;
	if ((int)size <= dest_len)
		return (size + src_len);
	while (*dest != 0)
	{
		index++;
		dest++;
	}
	while (*src != 0 && index < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	*dest = 0;
	return (src_len + dest_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[9] = "1234";
// 	char b[5] = "5678";
// 	char c[9] = "1234";
// 	char d[5] = "5678";
// 	printf("----ft_strlcat----\n");
// 	printf("%d\n%s\n", (int)ft_strlcat(a, b, 7), a);
// 	printf("----strlcat----\n");
// 	printf("%d\n%s\n", (int)strlcat(c, d, 7), c);
// }