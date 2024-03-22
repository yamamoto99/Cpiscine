/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genomoto <genomoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:24:23 by masayama          #+#    #+#             */
/*   Updated: 2024/03/17 20:27:48 by genomoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_u(int *input, int **map, int length)
{
	int	max_height;
	int	x;
	int	visible_buildings;
	int	i;

	i = 0;
	while (i < length)
	{
		max_height = 0;
		x = 0;
		visible_buildings = 0;
		while (x < length)
		{
			if (map[x][i] > max_height)
			{
				max_height = map[x][i];
				visible_buildings++;
			}
			x++;
		}
		if (input[i] != visible_buildings)
			return (0);
		i++;
	}
	return (1);
}

int	check_d(int *input, int **map, int length)
{
	int	max_height;
	int	x;
	int	visible_buildings;
	int	i;

	i = 0;
	while (i < length)
	{
		max_height = 0;
		x = length - 1;
		visible_buildings = 0;
		while (x >= 0)
		{
			if (map[x][i] > max_height)
			{
				max_height = map[x][i];
				visible_buildings++;
			}
			x--;
		}
		if (input[i] != visible_buildings)
			return (0);
		i++;
	}
	return (1);
}

int	check_l(int *input, int **map, int length)
{
	int	max_height;
	int	y;
	int	visible_buildings;
	int	i;

	i = 0;
	while (i < length)
	{
		max_height = 0;
		y = 0;
		visible_buildings = 0;
		while (y < length)
		{
			if (map[i][y] > max_height)
			{
				max_height = map[i][y];
				visible_buildings++;
			}
			y++;
		}
		if (input[i] != visible_buildings)
			return (0);
		i++;
	}
	return (1);
}

int	check_r(int *input, int **map, int length)
{
	int	max_height;
	int	y;
	int	visible_buildings;
	int	i;

	i = 0;
	while (i < length)
	{
		max_height = 0;
		y = length - 1;
		visible_buildings = 0;
		while (y >= 0)
		{
			if (map[i][y] > max_height)
			{
				max_height = map[i][y];
				visible_buildings++;
			}
			y--;
		}
		if (input[i] != visible_buildings)
			return (0);
		i++;
	}
	return (1);
}

int	check_map(int **input, int **map, int length)
{
	if (check_u(input[0], map, length) && check_d(input[1], map, length)
		&& check_l(input[2], map, length) && check_r(input[3], map, length))
		return (1);
	return (0);
}
