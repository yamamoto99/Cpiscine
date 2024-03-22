/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:47:42 by masayama          #+#    #+#             */
/*   Updated: 2024/03/18 17:32:33 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_head;

	dest_head = dest;
	while (*src != 0)
		*dest++ = *src++;
	*dest = 0;
	return (dest_head);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (res == NULL)
		return (NULL);
	return (ft_strcpy(res, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	stock = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (stock == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(stock[i].str);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}

// int	main(void)
// {
// 	char				*a[] = {"aaa", "bbb", "ccc"};
// 	struct s_stock_str	*p;

// 	p = ft_strs_to_tab(3, a);
// 	ft_show_tab(p);
// }
