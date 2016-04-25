/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_square_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/23 15:39:54 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/24 21:09:21 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen_column(char *str)
{
	int i;
	int columns;
	int	max_column;
	int first;

	i = 0;
	columns = 0;
	max_column = 0;
	first = 0;
	while (str[i] != '\0')
	{
		columns++;
		if (str[i] == '\n')
		{
			if (columns > max_column && first != 0)
				max_column = columns - 1;
			columns = 0;
			first++;
		}
		i++;
	}
	return (max_column);
}

int		ft_get_row_nbr(char *str)
{
	int		index;
	char	*row_str;

	index = 0;
	row_str = (char *)malloc(sizeof(char) * ft_strlen(str));
	while (str[index] >= '0' && str[index] <= '9' && str[index + 3] != '\n')
	{
		row_str[index] = str[index];
		index++;
	}
	str = &str[index];
	return (ft_atoi(row_str));
}

char	*ft_get_caract(char *str)
{
	int		i;
	int		j;
	char	*params;

	i = 0;
	j = 0;
	params = (char *)malloc(sizeof(char) * 3);
	while (str[i] >= '0' && str[i] <= '9' && str[i + 3] != '\n')
	{
		i++;
	}
	while (j < 3)
	{
		params[j] = str[i];
		i++;
		j++;
	}
	return (params);
}

int		ft_get_params(t_mi *minfo, char *str)
{
	minfo->height = ft_get_row_nbr(str);
	minfo->params = ft_get_caract(str);
	minfo->width = ft_strlen_column(str);
	if (minfo->height == 0 || minfo->width == 0)
		return (0);
	return (1);
}
