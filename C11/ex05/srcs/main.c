/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:18:21 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:22:31 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	void	(*func_arr[5])(int, int);
	char	op[5];
	int		operator;

	if (argc != 4)
		return (0);
	func_arr[0] = &add;
	func_arr[1] = &subtract;
	func_arr[2] = &multiply;
	func_arr[3] = &divide;
	func_arr[4] = &modulus;
	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	operator = check_operator(argv[2], op);
	if (operator == -1)
		return (0);
	func_arr[operator](ft_atoi(argv[1]), ft_atoi(argv[3]));
	return (0);
}
