/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:33:34 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/07 10:06:16 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*strsrc;
	char		*strdst;

	if (src == dst)
		return (dst);
	i = 0;
	strsrc = (const char *)src;
	strdst = (char *)dst;
	if (src < dst)
		while (++i <= n)
			strdst[n - i] = strsrc[n - i];
	else
		while (n-- > 0)
			*(strdst++) = *(strsrc++);
	return (strdst);
}
