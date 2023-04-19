/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:40:12 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/16 03:47:10 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	arr;
	void	*ptr;

	arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ptr = ft_memchr(arr, 8, sizeof(arr));
	printf("ptr: %ld \n", ((char *)ptr));
	printf("arr: %ld \n", arr);
	if (ptr != NULL)
		printf("Found at index: %ld\n", ((char *)ptr) - arr);
	else
		printf("Not found\n");
	return (0);
}
ค้นหา c  ใน *s ตามจำนวน n เมื่ิอหาเจอจะคืนค่าตำแหน่งที่เจอ
ถ้าไม่เจอจะคืนค่า NULL
*/
