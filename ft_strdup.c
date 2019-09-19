/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:17:28 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/17 16:46:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(ft_strlen(str));
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
