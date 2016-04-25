/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 11:33:07 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/22 12:37:41 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		index;
	int		size;

	index = 0;
	size = 0;
	while (dest[index] != '\0')
		index++;
	while (src[size] != '\0')
	{
		dest[index] = src[size];
		index++;
		size++;
	}
	dest[index] = '\0';
	return (dest);
}
