/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:27:51 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/18 15:30:24 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str, const char *str2, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (str[n] > str2[i])
			return ((int)str[i] - str2[i]);
		else if (str[i] < str2[i])
			return ((int)str[i] - str2[i]);
		n--;
		i++;
	}
	return (0);
}
