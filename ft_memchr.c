/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:42:44 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/17 18:40:30 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*nstr;

	i = 0;
	nstr = (unsigned char *)str;
	while (i++ < n)
		if (nstr[i] == c)
			return (&nstr[i]);
	return (NULL);
}
