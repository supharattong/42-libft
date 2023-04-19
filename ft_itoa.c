/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:26:19 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/18 14:58:12 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			i;
	long int	num;

	i = count_digits(n);
	ptr = (char *)malloc(sizeof(char) * i + 1);
	num = n;
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		ptr[--i] = num % 10 + 48;
		num = num / 10;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	n = 2147483647;
	printf("%s\n", ft_itoa(n));
}
เปลี่ยน integer เป็น string 
*/
