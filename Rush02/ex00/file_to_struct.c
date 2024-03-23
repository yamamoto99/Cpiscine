/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:51:18 by masayama          #+#    #+#             */
/*   Updated: 2024/03/23 11:13:38 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "rush_02.h"

int	file_to_struct(void)
{
	int	fd;
	char buf[1];
	// ssize_t n;
	int	count;
	
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1){
		ft_putstr("Error\n");
		return (-1);
	}
	count = 0;
	while (read(fd, buf, 1))
		count++;
	close(fd);
	ft_putnbr(count);
	return (1);
}
