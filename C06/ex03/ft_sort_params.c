/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:19:52 by masayama          #+#    #+#             */
/*   Updated: 2024/03/15 20:13:18 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
		ft_putchar(*str++);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != 0 && *s2 != 0) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

void	swaps(char *a, char *b)
{
	char	z;

	z = *a;
	*a = *b;
	*b = z;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	index;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swaps(argv[j], argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index++]);
	}
}
