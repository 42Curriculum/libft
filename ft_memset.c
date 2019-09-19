/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:37:09 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/16 17:43:07 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *arg, int i, size_t len)
{
	size_t			n;
	unsigned char	*car;

	if (arg == NULL)
		return (NULL);
	car = (unsigned char *)arg;
	n = 0;
	while (n < len)
	{
		car[n] = i;
		n++;
	}
	return (arg);
}
