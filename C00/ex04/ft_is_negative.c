/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:18:50 by masayama          #+#    #+#             */
/*   Updated: 2024/03/06 19:21:42 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 78;
	positive = 80;
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative((int)NULL);
// 	ft_is_negative(1);
// 	ft_is_negative(-1);
// }
