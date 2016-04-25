/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 20:14:28 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/22 12:40:00 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int		index;

	index = 0;
	while (str[index++] != '\0')
		if ('A' <= str[index] && str[index] <= 'Z')
			str[index] += 32;
	return (str);
}
