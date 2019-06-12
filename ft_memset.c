/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:43:39 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/12 16:12:22 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*strb;
	unsigned	int	i;

	i = 0;
	if (len == 0)
		return (b);
	if (!(b))
		return (NULL);
	strb = b;
	while (i < len)
	{
		strb[i] = (unsigned char)c;
		i++;
	}
	return (strb);
}
