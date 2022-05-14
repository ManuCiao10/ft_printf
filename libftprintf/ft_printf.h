/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:15:27 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/10 13:33:50 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_address(unsigned long num);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_hexadecimal(unsigned int n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_len(unsigned int num);
void	ft_hex_put(unsigned int num, const char string);
int		ft_print_hex(unsigned int num, const char string);
int		ft_print_unsigned(unsigned int n);
void	ft_putstr(char *str);
int		ft_putchar_fd(char c, int fd);
int		ft_num_len(unsigned int num);

#endif
