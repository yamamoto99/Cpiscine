/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:11:10 by masayama          #+#    #+#             */
/*   Updated: 2024/03/28 17:13:19 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <stdio.h>

void	add(int a, int b);
void	subtract(int a, int b);
void	multiply(int a, int b);
void	divide(int a, int b);
void	modulus(int a, int b);
int		check_operator(char *input, char *op);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);

#endif