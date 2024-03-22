/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:06:41 by masayama          #+#    #+#             */
/*   Updated: 2024/03/15 09:16:37 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strsize(int size, char **str)
{
	int	res;
	int	i;
	int	j;

	res = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != 0)
			j++;
		res += j;
		i++;
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);
}

char	*ft_strcp(char *dest, char *src)
{
	while (*src != 0)
		*dest++ = *src++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strlen;
	int		seplen;
	char	*res;
	char	*res_head;
	int		i;

	strlen = ft_strsize(size, strs);
	seplen = ft_strlen(sep) * (size - 1);
	if (size == 0)
	{
		res = (char *)malloc(sizeof(int) * 1);
		res[0] = 0;
		return (res);
	}
	res = (char *)malloc(sizeof(int) * (strlen + seplen + 1));
	i = 0;
	res_head = res;
	while (i < size)
	{
		res = ft_strcp(res, strs[i++]);
		if (i < size)
			res = ft_strcp(res, sep);
	}
	*res = 0;
	return (res_head);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *a[] = {"aaa", "bbb", "ccc"};
// 	char **p = a;

// 	printf("%s\n", ft_strjoin(0, p, "//////////"));
// }
