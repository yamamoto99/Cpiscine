/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genomoto <genomoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:03:09 by genomoto          #+#    #+#             */
/*   Updated: 2024/03/17 21:11:40 by genomoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	**allocate_input(int length)
{
	int	i;
	int	*base_input;
	int	**input;

	input = malloc(sizeof(int *) * 4);
	base_input = malloc(sizeof(int) * length * 4);
	if (input == NULL || base_input == NULL)
		return (0);
	i = 0;
	while (i < 4)
	{
		input[i] = base_input + i * length;
		i++;
	}
	return (input);
}

int	**allocate_map(int length)
{
	int	i;
	int	*base_map;
	int	**map;

	base_map = malloc(sizeof(int) * length * length);
	map = malloc(sizeof(int *) * length);
	if (map == NULL || base_map == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		map[i] = base_map + i * length;
		i++;
	}
	i = 0;
	while (i < length * length)
	{
		base_map[i] = 0;
		i++;
	}
	return (map);
}
