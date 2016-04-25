/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 20:04:34 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/22 12:40:33 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		lenght;
	char	tmp;

	i = 0;
	lenght = 0;
	while (str[i] != '\0')
	{
		lenght++;
		i++;
	}
	i = 0;
	while (i < lenght)
	{
		lenght--;
		tmp = str[i];
		str[i] = str[lenght];
		str[lenght] = tmp;
		i++;
	}
	return (str);
}
