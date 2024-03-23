/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:40:28 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 11:17:33 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

typedef struct s_dict
{
	char			*key;
	char			*nbr;
	struct s_dict	*next;
}					t_dict;

typedef struct s_dict_list
{
	t_dict	*head;
}			t_dict_list;

void	ft_putstr(char *str);
int		file_to_struct(void);
void	ft_putnbr(int nb);

#endif