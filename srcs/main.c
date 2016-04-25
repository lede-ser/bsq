/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 16:20:52 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/24 22:48:55 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_map_error(void)
{
	write(2, "map error\n", 10);
}

int		ft_resolve_bsq(char *str_map)
{
	char	**map;
	t_mi	*minfo;
	t_sqm	*sqm;

	minfo = (t_mi*)malloc(sizeof(t_mi));
	if (ft_get_params(minfo, str_map))
	{
		map = ft_str_to_tab(*minfo, str_map);
		sqm = ft_cast_map(*minfo, map);
		if (sqm)
		{
			ft_prepare_map(*sqm, *minfo, map);
			if (ft_aff_bsq(*minfo, map))
			{
				free(minfo);
				free(map);
				free(sqm);
				free(str_map);
				return (1);
			}
		}
	}
	return (0);
}

void	ft_foreach_map(int ac, char **av)
{
	char	*str_map;
	int		index;

	index = 1;
	while (index < ac)
	{
		str_map = ft_get_maps(index, av);
		if (!ft_resolve_bsq(str_map))
			ft_map_error();
		index++;
	}
}

void	ft_for_entry_map(void)
{
	char	*str_map;

	str_map = ft_get_map();
	if (!ft_resolve_bsq(str_map))
		ft_map_error();
}

int		main(int ac, char **av)
{
	if (ac >= 2)
		ft_foreach_map(ac, av);
	else
		ft_for_entry_map();
	return (0);
}
