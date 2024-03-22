/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:27:30 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 18:23:38 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		is_positive;
	char	*nbr_head;
	int		res;

	is_positive = 1;
	res = 0;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_positive *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (is_positive * res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "   ---+--+1234ab567";
// 	printf("%d\n", ft_atoi(a));
// }