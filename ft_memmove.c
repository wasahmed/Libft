/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:33:34 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/13 08:18:55 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*dest;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	source = (char	*)src;
	dest = (char	*)dst;
	if (source == dest)
		return ((char	*)source);
	if (source < dest)
		while ((int)(--n) >= 0)
			dest[n] = source[n];
	else
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	return (dest);
}
