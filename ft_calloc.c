/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthongso <sthongso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:36:33 by sthongso          #+#    #+#             */
/*   Updated: 2023/04/17 16:06:25 by sthongso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
//จองพื้นที่หน่วยความจำและกำหนดพื้นที่จองเป็น 0
