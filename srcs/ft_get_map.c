/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 21:49:55 by lede-ser          #+#    #+#             */
/*   Updated: 2015/09/24 21:52:27 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_get_map(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*complete_buf;

	complete_buf = (char *)malloc(sizeof(char));
	while ((ret = read(0, buf, BUF_SIZE)) != 0)
	{
		buf[ret] = '\0';
		complete_buf = ft_strconcat(complete_buf, buf);
	}
	return (complete_buf);
}

char	*ft_get_maps(int index, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*complete_buf;

	complete_buf = (char *)malloc(sizeof(char));
	complete_buf[0] = '\0';
	fd = open(av[index], O_RDWR, S_IRUSR | S_IWUSR);
	if (fd == -1)
		ft_map_error();
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)) != 0)
		{
			buf[ret] = '\0';
			complete_buf = ft_strconcat(complete_buf, buf);
		}
		close(fd);
	}
	return (complete_buf);
}
