/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:40:36 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/09 13:55:44 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
	{
		counter += ft_putchar_fd('-', fd);
		counter += ft_putchar_fd('2', fd);
		counter += ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		counter += ft_putchar_fd('-', fd);
		counter += ft_putnbr_fd(-n, fd);
	}
	else if (n < 10)
	{
		counter += ft_putchar_fd(n + '0', fd);
	}
	else
	{
		counter += ft_putnbr_fd(n / 10, fd);
		counter += ft_putnbr_fd(n % 10, fd);
	}
	return (counter);
}
