/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 11:59:32 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/24 22:43:11 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# define BUF_SIZE 7340032
# define IMAPTL imap[h - 1][w - 1]
# define IMAPTR imap[h][w - 1]
# define IMAPBL imap[h - 1][w]

typedef struct	s_square_max
{
	int			h;
	int			w;
	int			size;
}				t_sqm;

typedef struct	s_map_info
{
	int			width;
	int			height;
	char		*params;
}				t_mi;

void			ft_foreach_map(int ac, char **av);
char			*ft_get_map(void);
char			*ft_get_maps(int index, char **av);
int				ft_get_params(t_mi *minfo, char *str);
int				ft_strlen_column(char *str);
int				ft_get_row_nbr(char *str);
char			*ft_get_caract(char *str);
int				ft_check_map(t_mi *params, char *map);
char			**ft_str_to_tab(t_mi minfo, char *strmap);
t_sqm			*ft_cast_map(t_mi minfo, char **map);
int				ft_get_biggest(t_sqm *sqm, t_mi minfo, int **imap, char **map);
void			ft_save_biggest(int value, int h, int w, t_sqm *sqm);
int				ft_find_square(t_sqm *sqm, int w, int h, int **imap);
int				ft_aff_bsq(t_mi minfo, char **map);
void			ft_prepare_map(t_sqm sqm, t_mi minfo, char **map);
void			ft_map_error(void);

#endif
