/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:36:15 by wasahmed          #+#    #+#             */
/*   Updated: 2019/05/28 10:28:00 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;
	
//	if (src == NULL || dest == NULL)
//		return (NULL);
	dest = (char *)dst;
	src = (char *)str;
	if (src == NULL || dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src == NULL || dest == NULL)
		return (NULL);
	return (dst);
}
