/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:41:27 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/17 17:25:05 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	char s[] = "Hello";
	char sd[] = "Hello";

	printf("originale: %s \n", strchr(s, 'e'));
	printf("mine: %s \n", ft_strchr(sd, 'e'));
	return (0);
}
ค้นหา c ใน *s เจอแล้วคึนค่าตั้งแต่ตำแหน่งที่เจอถึง
ตัวสุดท้ายจากซ้ายไปขวา
*/
