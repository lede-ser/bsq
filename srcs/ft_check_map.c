/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 15:42:05 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/23 16:12:13 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_check_map(t_mi *minfo, char *map)
{
	char	empty;
	char	full;

	empty = minfo->params[0];
	full = minfo->params[1];
	while (*map != '\n')
		map++;
	while (map)
	{
		if (!(*map == empty || *map == full || *map == '\n'))
			return (0);
		map++;
	}
	return (1);
}
