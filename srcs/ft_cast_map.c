/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 15:45:39 by lede-ser          #+#    #+#             */
/*   Updated: 2015/09/24 21:45:27 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_save_biggest(int value, int h, int w, t_sqm *sqm)
{
	sqm->h = h;
	sqm->w = w;
	sqm->size = value;
}

int		ft_find_square(t_sqm *sqm, int w, int h, int **imap)
{
	int		ret;

	if (h >= 1 && w >= 1)
	{
		if (IMAPTL <= IMAPTR && IMAPTL <= IMAPBL)
			ret = (IMAPTL + 1);
		else if (IMAPTR <= IMAPTL && IMAPTR <= IMAPBL)
			ret = (IMAPTR + 1);
		else
			ret = (IMAPBL + 1);
	}
	else
		ret = 1;
	if (ret > sqm->size)
		ft_save_biggest(ret, h, w, sqm);
	return (ret);
}

int		ft_get_biggest(t_sqm *sqm, t_mi minfo, int **imap, char **map)
{
	int		w;
	int		h;

	h = 0;
	while (h < minfo.height)
	{
		w = 0;
		imap[h] = (int*)malloc(sizeof(int) * (minfo.width));
		while (w < minfo.width)
		{
			if (map[h][w] != minfo.params[0] && map[h][w] != minfo.params[1])
			{
				return (0);
			}
			imap[h][w] = (map[h][w] == minfo.params[1]) ? 0 :
					ft_find_square(sqm, w, h, imap);
			w++;
		}
		h++;
	}
	return (1);
}

t_sqm	*ft_cast_map(t_mi minfo, char **map)
{
	int		**imap;
	t_sqm	*sqm;

	imap = (int**)malloc(sizeof(int*) * (minfo.height));
	sqm = (t_sqm *)malloc(sizeof(t_sqm));
	if (ft_get_biggest(sqm, minfo, imap, map))
		return (sqm);
	return (NULL);
}
