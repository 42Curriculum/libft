/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:12:17 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/18 14:54:35 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *find)
{
	int i;
	int n;

	i = 0;
	while (str[i])
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
