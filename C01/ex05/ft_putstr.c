/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:39:45 by masayama          #+#    #+#             */
/*   Updated: 2024/03/07 14:23:44 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		write(1, &str[count], 1);
		count++;
	}
}

// int	main(void)
// {
// 	char	a[5] = "asdf";

// 	ft_putstr(a);
// }
