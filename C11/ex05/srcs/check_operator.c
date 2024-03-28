/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:44:04 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:47:32 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	is_succees(char *input)
{
	if (ft_strlen(input) != 1)
		return (0);
	if ((input[0] == '+') || (input[0] == '-') || (input[0] == '*')
		|| (input[0] == '/') || (input[0] == '%'))
		return (1);
	return (0);
}

int	check_operator(char *input, char *op)
{
	int	res;

	if (!is_succees(input))
		return (-1);
	res = 0;
	while (*op)
	{
		if (op[res] == input[0])
			return (res);
		res++;
	}
	return (-1);
}
