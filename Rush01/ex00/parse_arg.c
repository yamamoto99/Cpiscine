/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genomoto <genomoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:58:08 by genomoto          #+#    #+#             */
/*   Updated: 2024/03/17 20:49:30 by genomoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**allocate_input(int length);

int	count_digits(char *arg)
{
	int	i;
	int	digits;
	int	is_next_space;

	i = 0;
	digits = 0;
	is_next_space = 0;
	while (arg[i])
	{
		if (is_next_space && arg[i] == ' ')
			is_next_space = 0;
		else if (!is_next_space && '1' <= arg[i] && arg[i] <= '9')
		{
			is_next_space = 1;
			digits++;
		}
		else
			return (-1);
		i++;
	}
	return (digits);
}

int	get_length(int digits)
{
	int	i;
	int	length;

	i = 4;
	length = 0;
	while (i <= 9)
	{
		if (digits == i * 4)
		{
			length = i;
			break ;
		}
		i++;
	}
	return (length);
}

int	parse_arg_to_input(int **input, char *arg, int length)
{
	int	arg_pos;
	int	j;
	int	w;

	arg_pos = 0;
	j = 0;
	w = 0;
	while (j < 4)
	{
		w = 0;
		while (w < length)
		{
			if (1 <= (arg[arg_pos] - '0') && (arg[arg_pos] - '0') <= length)
				input[j][w] = arg[arg_pos] - '0';
			else
				return (-1);
			w++;
			arg_pos += 2;
		}
		j++;
	}
	if (arg[arg_pos - 1] != '\0')
		return (-1);
	return (0);
}

int	**parse_arg(char *arg, int *length)
{
	int	digits;
	int	**input;

	digits = count_digits(arg);
	if (digits < 0)
		return (0);
	*length = get_length(digits);
	if (*length == 0)
		return (0);
	input = allocate_input(*length);
	if (input == 0)
		return (0);
	if (parse_arg_to_input(input, arg, *length) == -1)
		return (0);
	return (input);
}
