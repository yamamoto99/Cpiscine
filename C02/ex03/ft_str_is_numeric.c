/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:33:22 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:42:04 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != 0)
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Only numbers : %d\n", ft_str_is_numeric("4924890729847239874"));
// 	printf("Not only numbers : %d\n", ft_str_is_numeric("jhfdsi8y23fws"));
// 	printf("Empty string : %d\n", ft_str_is_numeric(""));
// }