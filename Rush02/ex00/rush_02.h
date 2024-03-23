/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:40:28 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 09:54:43 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

typedef struct s_dict
{
	char			*key;
	char			*nbr;
	struct s_dict	*next;
	struct s_dict	*prev;
}					t_dict;

typedef struct s_dict_list
{
	t_dict	*head;
	t_dict	*tail;
}			t_dict_list;

void	ft_putstr(char *str);

#endif