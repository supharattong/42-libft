/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:43:21 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/13 17:31:36 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char deso[50];
	char loco[] = "hello world!!";
	ft_memcpy(deso, loco, 11);
	printf("%s\n\n", deso);
	char		adeso[50];
	const char	aloco[] = "hello world!!";
	memcpy(adeso, aloco, 11);
	printf("%s\n\n", adeso);
	return (0);
}
copyf from *src to *dst as n
copy from left to right
*/
