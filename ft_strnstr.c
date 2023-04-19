/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:47:44 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/17 13:58:47 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	if (len > 0)
	{
		while (haystack[i] != '\0' && i < len)
		{
			j = 0;
			while (haystack[i + j] == needle[j]
				&& needle[j] != '\0' && i + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
			i++;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s;
	char	ss;

	ss[] = "lo";
	s[] = "say hello to my little friend";
	printf("1: %s\n", ft_strnstr(s, ss, 10));
}
ค้นหา *needle ใน *haystack โดยการเปรียบเทียบ haystac ทีละตำแหน่ง
จนกว่าค่าจะตรงกับ needle
*/
