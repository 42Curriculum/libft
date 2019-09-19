/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:54:49 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/18 14:57:53 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	int		n;

	i = 0;
	while (i < len)
	{
		n = 0;
		while (find[n] == str[i + n])
		{
			if (find[n + 1] == '\0')
			{
				return ((char *)&str[i]);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}
