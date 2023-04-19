/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:18:50 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/13 16:12:58 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}
/*
int main(void)
{
    char str[] = "hello";
	printf("before: %s\n", str);
    ft_bzero(str, 2);
    printf("my: %s\n", str);

    char loco[] = "hello";
    printf("before: %s\n", loco);
	bzero(loco, 2);
    printf("og: %s\n", loco);
}
ใช้ในการลบหรือเติมค่า 0 ใน *s
ในพื้นที่ที่ต้องการให้ข้อมูลหายไป n
*/
