/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eardingh <eardingh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:31:29 by eardingh          #+#    #+#             */
/*   Updated: 2022/04/10 13:31:06 by eardingh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

void	ft_hex_put(unsigned int num, const char string)
{
	if (num >= 16)
	{
		ft_hex_put(num / 16, string);
		ft_hex_put(num % 16, string);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd((num + '0'), 1);
		}
		else
		{
			if (string == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (string == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char string)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_hex_put(num, string);
	return (ft_len(num));
}
