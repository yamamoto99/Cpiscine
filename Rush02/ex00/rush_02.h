/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:40:28 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 16:05:56 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

typedef struct s_dict
{
	char	*key;
	char	*value;
}			t_dict;

void	ft_putstr(char *str);
int		file_to_struct(void);
void	ft_putnbr(int nb);

#endif