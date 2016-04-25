/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 09:59:52 by qdequele          #+#    #+#             */
/*   Updated: 2015/09/22 14:34:37 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char var);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strconcat(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strrev(char *str);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);
int		ft_atoi(char *str);
#endif
