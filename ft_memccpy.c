/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:27:15 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/13 07:57:21 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	const char	*source;
	char		*destination;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	source = (const char *)src;
	destination = (char *)dst;
	while (i < n && (c))
	{
		destination[i] = source[i];
		if ((unsigned char)source[i] == (unsigned char)c)
			return ((char *)destination + i + 1);
		i++;
	}
	return (NULL);
}
