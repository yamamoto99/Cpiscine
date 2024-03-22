/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:57:53 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/09 17:53:21 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, int y);

int	ft_is_number(char *input)
{
	int	i;

	i = 0;
	while (*input != '\0')
	{
		if (*input < '0' || *input > '9')
		{
			return (1);
		}
		input++;
		i++;
	}
	if (i > 12)
	{
		return (1);
	}
	return (0);
}

int	ft_char_to_nbr(char *input)
{
	long	i;

	i = 0;
	while (1)
	{
		i += *input - 0x30;
		if (*(++input) == 0x00)
			break ;
		i *= 10;
	}
	if (i <= 2147483647)
	{
		return ((int)i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (1);
	}
	else
	{
		if (ft_is_number(argv[1]) == 0 && ft_is_number(argv[2]) == 0)
		{
			rush00(ft_char_to_nbr(argv[1]), ft_char_to_nbr(argv[2]));
		}
	}
	return (0);
}
