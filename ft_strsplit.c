/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:46:55 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/17 13:51:22 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wordsize(const char *str, char c)
{
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			size++;
		}
	}
	return (size++);
}

char			**ft_strsplit(const char *str, char c)
{
	char	**tab;
	int		i;
	int		col;
	int		start;

	i = 0;
	col = 0;
	tab = (char **)malloc(sizeof(char*) * ft_wordsize(str, c) + 1);
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			start = i;
			while (str[i] && str[i] != c)
				i++;
			tab[col++] = ft_strsub(str, start, i - start);
		}
	}
	tab[col] = NULL;
	return (tab);
}
