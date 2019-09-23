/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 09:51:09 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/23 13:30:02 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		i;
	int		count;

	i = 0;
	if (!(str = (char **)malloc((ft_ctwords((char *)s, c) + 1) * sizeof(*str))))
		return (NULL);
	while (*s)
	{
		count = 0;
		while (*s != c && *s)
		{
			s++;
			count++;
		}
		if (count > 0)
		{
			str[i] = ft_strnew(count);
			str[i++] = ft_strsub(s - count, 0, count);
		}
		while (*s == c && *s)
			s++;
	}
	str[i] = NULL;
	return (str);
}
