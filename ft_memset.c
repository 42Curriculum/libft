/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:37:09 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/23 13:19:45 by jjosephi         ###   ########.fr       */
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
