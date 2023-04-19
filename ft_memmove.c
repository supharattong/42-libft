/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:51:37 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/13 18:43:33 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s || len == 0)
		return (d);
	if (d > s && (s + len) > d)
		while (len--)
			d[len] = s[len];
	else
	{
		while (len--)
			*d++ = *s++;
		return (dst);
	}
	return (d);
}
/*
int main(void)
{
    char cSrc[] = "hello world!!";
    char cDest[] = "big donutdonutdonut";
    ft_memmove(cDest, cSrc, 11);
    printf("mine: %s\n", cDest);
    char cSrc1[] = "hello world!!";
    char cDest1[] = "big donutdonutdonut";
    memmove(cDest1, cSrc1, 11);
    printf("result: %s\n", cDest1);
เหมือน ft_memcpy แต่มีการตรวจสอบว่า
พื้นที่ที่จะคัดลอกมีการทับซ้อนไหม ถ่้ามีก็ copy เหมืิอนเดิม
}
*/
