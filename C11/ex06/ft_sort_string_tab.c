/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:35:12 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:46:55 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	swaps(char **a, char **b)
{
	char	*z;

	z = *a;
	*a = *b;
	*b = z;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1] != 0)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				swaps(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*tab1[] = {"banana", "apple", "cherry", "date", 0};

// 	ft_sort_string_tab(tab1);
// 	for (int i = 0; tab1[i] != 0; i++)
// 	{
// 		printf("%s ", tab1[i]);
// 	}
// 	printf("\n");
// }
