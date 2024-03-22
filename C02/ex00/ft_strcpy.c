/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:19:21 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 10:37:32 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_head;

	dest_head = dest;
	while (*src != 0)
		*dest++ = *src++;
	*dest = 0;
	return (dest_head);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest[10] = "000000000";
// 	char src[10] = "123";
// 	printf("copy src to dest : %s\n", ft_strcpy(dest, src));
// }