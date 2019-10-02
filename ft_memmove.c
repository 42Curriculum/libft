/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:52:09 by jjosephi          #+#    #+#             */
/*   Updated: 2019/10/01 18:34:00 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*nsrc;
	unsigned char	*ndest;

	i = -1;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (nsrc > ndest)
	{
		while (++i < n)
			ndest[i] = nsrc[i];
	}
	else
	{
		i = n;
		while (--i > 0)
			ndest[i] = nsrc[i];
	}
	return (dest);
}
