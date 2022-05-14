/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:14:37 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/11 16:31:49 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(va_list vl, const char string)
{
	int	counter;

	counter = 0;
	if (string == 's')
		counter += ft_putstr_fd(va_arg(vl, char *), 1);
	else if (string == 'd' || string == 'i')
		counter += ft_putnbr_fd(va_arg(vl, int), 1);
	else if (string == 'c')
		counter += ft_putchar_fd(va_arg(vl, int), 1);
	else if (string == 'x' || string == 'X')
		counter += ft_print_hex(va_arg(vl, unsigned int), string);
	else if (string == 'u')
		counter += ft_print_unsigned(va_arg(vl, int));
	else if (string == 'p')
		counter += ft_address(va_arg(vl, unsigned long));
	else if (string == '%')
		counter += ft_putchar_fd('%', 1);
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		counter;
	va_list	vl;

	va_start(vl, str);
	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			counter += ft_string(vl, str[i + 1]);
			i++;
		}
		else
		{
			counter += ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end(vl);
	return (counter);
}
