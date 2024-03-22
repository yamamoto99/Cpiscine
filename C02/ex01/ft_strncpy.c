/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:09:52 by masayama          #+#    #+#             */
/*   Updated: 2024/03/11 13:17:49 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		index;
	char	*dest_head;

	dest_head = dest;
	index = (int)n;
	while (*src != 0 && index-- > 0)
		*dest++ = *src++;
	while (index-- > 0)
		*dest++ = 0;
	return (dest_head);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char dest[10] = "000000000";
// 	char src[10] = "123";
// 	printf("copy src to dest : %s\n", ft_strncpy(dest, src, 5));
// }