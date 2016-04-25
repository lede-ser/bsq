/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 15:14:43 by lede-ser          #+#    #+#             */
/*   Updated: 2015/09/24 21:42:53 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_str_to_tab(t_mi minfo, char *strmap)
{
	char	**map;
	int		i;
	int		h;
	int		w;

	map = (char**)malloc(sizeof(char*) * minfo.height);
	h = 0;
	i = 0;
	while (strmap[i] != '\n')
		i++;
	i++;
	while (strmap[i] != '\0')
	{
		map[h] = (char*)malloc(sizeof(char) * minfo.width);
		w = 0;
		while (strmap[i] != '\n')
		{
			map[h][w] = strmap[i];
			w++;
			i++;
		}
		i++;
		h++;
	}
	return (map);
}
