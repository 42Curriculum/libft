/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:44:31 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/16 20:51:55 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *)src;
	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == c)
		{
			if (i < n)
				n = i;
			ft_memcpy(dest, src, n);
			return (&dest[i + 1]);
		}
		i++;
	}
	ft_memcpy(dest, src, n);
	return (NULL);
}
