/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:40:28 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 09:43:52 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

typedef struct s_dict
{
	char	*key;
	char	*nbr;
	t_dict	next;
	t_dict	prev;
}			t_dict;

void	ft_putstr(char *str);

#endif