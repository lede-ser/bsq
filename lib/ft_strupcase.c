/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 19:10:24 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/22 12:40:16 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index++] != '\0')
		if ('a' <= str[index] && str[index] <= 'z')
			str[index] -= 32;
	return (str);
}
