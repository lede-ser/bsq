/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/15 18:11:59 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/22 14:33:58 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		value;
	int		index;
	int		negative;

	value = 0;
	index = 0;
	negative = 0;
	while (str[index] == ' ' || str[index] == '0' || str[index] == '\n' ||
			str[index] == '\t' || str[index] == '\v' || str[index] == '\r' ||
			str[index] == '\f')
		index++;
	if (str[index] == '-' && (str[index + 1] >= '0' && str[index + 1] <= '9'))
	{
		negative = 1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index])
	{
		value = value * 10 + (str[index] - '0');
		index++;
	}
	if (str[index] < '0' && str[index] > '9')
		return (0);
	return ((negative) ? -value : value);
}
