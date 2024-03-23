/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 08:46:15 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 10:45:43 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr("argc = 2の時の処理を書く\n");
	else if (argc == 3)
		ft_putstr("argc = 3の時の処理を書く\n");
	else
		ft_putstr("Error\n");
	(void)argv;
	file_to_struct();
}
