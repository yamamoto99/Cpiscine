/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genomoto <genomoto@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 09:43:00 by genomoto          #+#    #+#             */
/*   Updated: 2024/03/17 20:16:18 by genomoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		generate_map(int **input, int length);

int		**parse_arg(char *arg, int *length);

int	main(int argc, char *argv[])
{
	int	length;
	int	**input;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	input = parse_arg(argv[1], &length);
	if (input == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!generate_map(input, length))
		ft_putstr("Error\n");
}
