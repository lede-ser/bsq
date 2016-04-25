/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 10:56:02 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/24 19:52:45 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stradd(char *origin, char *str, int *i)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		origin[*i] = str[index];
		index++;
		(*i)++;
	}
}

char	*ft_strconcat(char *s1, char *s2)
{
	char	*str;
	int		size_s1;
	int		size_s2;
	int		i;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	i = 0;
	if (str)
	{
		ft_stradd(str, s1, &i);
		ft_stradd(str, s2, &i);
		str[i] = '\0';
	}
	free(s1);
	return (str);
}
