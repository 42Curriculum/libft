/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:07:09 by jjosephi          #+#    #+#             */
/*   Updated: 2019/09/22 11:51:36 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	n;
	unsigned int	i;
	unsigned int	size;

	if (nbr < 0)
		n = (unsigned int)(nbr * -1);
	else
		n = (unsigned int)nbr;
	size = (unsigned int)ft_intsize(n);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	if (nbr < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	while (n >= 10)
	{
		str[i--] = (char)(n % 10 + 48);
		n /= 10;
	}
	str[i] = (char)(n % 10 + 48);
	str[size] = '\0';
	return (str);
}
