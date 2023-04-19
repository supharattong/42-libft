/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:34:44 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/15 22:04:04 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
int	main(void)
{
	char s1[] = "Compi5er";
	char s2[] = "compiler";

	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 8));
	printf("strncmp: %d", strncmp(s1, s2, 8));
}
เปรียบเทียบ *s และ *s2 ที่ละตำแหน่งคู่กันถ้าตัวที่เปรียบเทียบ
แต่ละคู่มีค่าไม่เหมืิอนกันจะแสดงค่าที่ *s1 - *s2 แล้วแสดงค่าความ
ต่างออกมาเป็นตัวเลข ascii  ถ้า *s และ *s2 มีตัวที่ต่างกันมากกว่า
1 ตำแหน่ง จะแสดงตำแหน่งแรกสุดที่เจอ
*/
