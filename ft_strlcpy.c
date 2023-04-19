/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:40:38 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/15 16:31:44 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	s[] = "bellow";
	char	d[] = "hello yellow";
	char	da[] = "hello yellow";
	char	sa[] = "bellow";

	ft_strlcpy(d, s, ft_strlen(d));
	printf("1-mine: %s\n", d);
	strlcpy(da, sa, strlen(da));
	printf("1-original: %s\n", da);
strlcpy คัดลอก string และมีการตรวจสอบขนาดของ
string และกำหนดค่า NULL ในตำแหน่งสุดท้าย ต่างจาก
memcpy ที่ไม่มีการตรวจสอบขนาดและการระบุค่า NULL
ในตำแหน่งสุดท้าย
}
*/
