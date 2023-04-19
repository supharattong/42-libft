/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:29:02 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/15 18:13:58 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	j = dstlen;
	while (src[i] != 0 && i < (dstsize - dstlen - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
/*
int	main(void)
{
	int		i = 15;
	char	s[20] = "Hello bangkok";
	char	d[10] = "a";

	printf ("size of s: %lu\n", strlen(s));
	printf ("size of d: %lu\n", strlen(d));
	printf ("%lu\n", ft_strlcat(d, s, i));
	printf("Concatenated String: %s\n", d);
}
dst จะถูกเชื่อมต่อด้วย src แต่ถ้า dst > dstsize
src จะไม่เชื่อมต่อกับ dst เมื่อไม่ต่อกันก็จะส่งค่าคืนเป็น
ตัวอักษรที่อยู่่ใน dst มีการระบุขนาดและค่า NULL ในตำแหน่งสุดท้าย
*/
