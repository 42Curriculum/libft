/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:34:55 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/18 13:20:38 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t i;
	size_t max;
	size_t len;

	len = ft_strlen(dst);
	max = destsize - len - 1;
	i = 0;
	if (destsize > 0 && len <= destsize)
	{
		while (src[i] && i < max)
		{
			dst[len] = src[i];
			i++;
			len++;
		}
		dst[len] = '\0';
	}
	return (len + ft_strlen(src));
}
