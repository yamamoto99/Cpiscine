/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:51:18 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 11:56:52 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush_02.h"

int	file_to_struct(void)
{
	int	fd;
	char buf[1];
	ssize_t n;
	int	count;
	char *str;
	
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1){
		ft_putstr("Error\n");
		return (-1);
	}
	count = 0;
	while (read(fd, buf, 1))
	{
		count++;
	}
	str = malloc(sizeof(char) * count + 1);
	n = read(fd, str, count);
	if(n == -1)
		return (-1);
	close(fd);
	ft_putstr(str);
	return (1);
}
