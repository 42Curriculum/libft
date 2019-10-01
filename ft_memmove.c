/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:52:09 by jjosephi          #+#    #+#             */
/*   Updated: 2019/10/01 12:17:48 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*nsrc;
	unsigned char	*tempdest[n];
	unsigned char	*ndest;

	i = 0;
	nsrc = (unsigned char *)src;
	ndest = (unsigned char *)dest;
	while (i < n)
	{
		tempdest[i] = nsrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ndest[i] = tempdest[i];
		i++;
	}
	return ((void *)dest);
}
