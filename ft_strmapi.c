/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:17:13 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/18 15:33:40 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	map = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (map == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
/*ใช้ฟังก์ชัน 'f' กับอักขระแต่ละตัวของ
สตริง 's' และส่งดัชนีเป็นอาร์กิวเมนต์แรก
เพื่อสร้างสตริงใหม่ */
