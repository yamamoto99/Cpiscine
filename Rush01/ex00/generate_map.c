/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genomoto <genomoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 08:39:33 by masayama          #+#    #+#             */
/*   Updated: 2024/03/17 20:55:20 by genomoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_map(int **input, int **map, int size);

int		**allocate_map(int length);

void	ft_putnbr(int nbr);

void	ft_putstr(char *str);

int	check_row(int **map, int row, int length, int num)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (map[row][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_col(int **map, int col, int length, int num)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (map[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	put_map(int **input, int **map, int length)
{
	int	i;
	int	j;

	if (check_map(input, map, length))
	{
		i = 0;
		while (i < length)
		{
			j = 0;
			while (j < length)
			{
				ft_putnbr(map[i][j]);
				if (j != length - 1)
					ft_putstr(" ");
				j++;
			}
			ft_putstr("\n");
			i++;
		}
		return (1);
	}
	else
		return (0);
}

int	generate(int **input, int **map, int cell, int length)
{
	int	num;

	if (cell == length * length)
		return (put_map(input, map, length));
	if (map[cell / length][cell % length] == 0)
	{
		num = 1;
		while (num <= length)
		{
			if (check_row(map, cell / length, length, num) && check_col(map,
					cell % length, length, num))
			{
				map[cell / length][cell % length] = num;
				if (generate(input, map, cell + 1, length))
					return (1);
				map[cell / length][cell % length] = 0;
			}
			num++;
		}
	}
	else
		return (generate(input, map, cell + 1, length));
	return (0);
}

int	generate_map(int **input, int length)
{
	int	**map;

	map = allocate_map(length);
	if (map == 0)
		return (0);
	if (generate(input, map, 0, length))
		return (1);
	else
		return (0);
}
