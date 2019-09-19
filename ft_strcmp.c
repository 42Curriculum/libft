/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:59:03 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/18 15:27:06 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str, const char *str2)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > str2[i])
			return ((int)str[i] - str2[i]);
		else if (str[i] < str2[i])
			return ((int)str[i] - str2[i]);
		i++;
	}
	return (0);
}
