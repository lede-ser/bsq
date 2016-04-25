/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_bsq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 14:45:13 by lede-ser          #+#    #+#             */
/*   Updated: 2015/09/24 21:44:53 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_prepare_map(t_sqm sqm, t_mi minfo, char **map)
{
	int h;
	int w;

	h = sqm.h - sqm.size + 1;
	while (h <= sqm.h)
	{
		w = sqm.w - sqm.size + 1;
		while (w <= sqm.w)
		{
			map[h][w] = minfo.params[2];
			w++;
		}
		h++;
	}
}

int		ft_aff_bsq(t_mi minfo, char **map)
{
	int h;

	h = 0;
	while (h < minfo.height)
	{
		write(1, map[h], minfo.width);
		write(1, "\n", 1);
		h++;
	}
	return (1);
}
