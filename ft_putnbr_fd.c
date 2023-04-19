/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:59:11 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/18 16:03:42 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = (unsigned int)(n * (-1));
	}
	else
		number = (unsigned int)n;
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		number = number % 10;
	}
	ft_putchar_fd(number + '0', fd);
}
//แปลงตัวเลขจำนวนเต็มที่รับเข้ามาให้เป็นสตริง
