/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:36:45 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/15 21:00:52 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = (NULL);
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main(void)
{
	char str[] = "Hello, world!";
	char *p;
	char s[] = "Hello, world!";
	p = ft_strrchr(str, 'w');
	printf("ft_strrchr: %s\n", p);
	printf("originale: %s \n", strrchr(s, 'w'));
	return 0;
}
ทำงานเหมือน strchr แต่จะหา c จาก
ขวาไปซ้าย
*/
