/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:30:26 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:07:31 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_atoi(char *str)
{
	int		is_positive;
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
