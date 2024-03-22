/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:12:08 by masayama          #+#    #+#             */
/*   Updated: 2024/03/22 10:38:50 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	struct s_list *list;
	list = malloc(sizeof(t_list) * 2);
	list->next = NULL;
	list->data = data;
	return (list);
}

#include <stdio.h>

int	main(void)
{
	t_list *a;
	a = ft_create_elem("aa");
	printf("s\n", a->next);
	printf("s\n", a->next);
}