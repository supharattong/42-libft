/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:05:11 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/18 14:43:30 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		sign;
	int		number;
	int		i;

	sign = 1;
	number = 0;
	i = 0;
	if (ft_strlen(s) >= 20)
		return (0);
	if (ft_strlen(s) >= 19)
		return (-1);
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == 45 || s[i] == 43)
	{
		if (s[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		number = number * 10 + (s[i] - 48);
		i++;
	}
	return (sign * number);
}
/*
int	main(void)
{
	char	sa[21];
	char	s[21];

	sa[21] = "-9223372036854775809";
	s[21] = "-9223372036854775809";
	printf("result : %d\n", ft_atoi(sa));
	printf("result : %d\n", atoi(s));
}
แปลงstring ที่เป็นตัวเลขให้เป็น intrger
*/
