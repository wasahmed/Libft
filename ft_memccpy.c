/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:27:15 by wasahmed          #+#    #+#             */
/*   Updated: 2019/05/30 14:08:45 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	const char *source;
	char *destination;

	i = 0;
	source = (const char *)src;
	destination = (char *)dst;
	while (i < n)
	{
		if (source[i] == (unsigned char)c)
		{
			while (++i < n)
				destination[i] = source[i];
		}
		i++;
	}
	return (destination);
}
