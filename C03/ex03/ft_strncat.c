/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:29:09 by masayama          #+#    #+#             */
/*   Updated: 2024/03/15 08:50:53 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0 && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[8] = "123";
// 	char b[3] = "45";
// 	char c[8] = "123";
// 	char d[3] = "45";
// 	printf("----ft_strncat----\n");
// 	printf("%s\n", ft_strncat(a, b, 4));
// 	printf("----strncat----\n");
// 	printf("%s\n", strncat(c, d, 4));
// }