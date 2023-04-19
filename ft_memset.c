/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:22:44 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/13 15:40:34 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (len > 0)
	{
		*p++ = (unsigned char) c;
		len--;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5] = "hello";
    char br[6] = "Borrow";
    ft_memset(str + 2, '*', 3);
	printf("my: %s\n", str);
	memset(str + 1, '*', 3);
	printf("og: %s\n", str);
}
แทนที่ตัวอักษรใน string str โดยกำหนดตัวที่แทนที่ในตัวแปร c
และแทนตามจำนวนที่ระบุใน len
*/
