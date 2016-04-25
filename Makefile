#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdequele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/21 12:13:59 by qdequele          #+#    #+#              #
#    Updated: 2015/11/25 14:34:28 by lede-ser         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#Define the program
NAME			= bsq
_SRC			= ft_str_to_tab.c ft_cast_map.c ft_check_map.c\
					ft_get_square_params.c  main.c ft_aff_bsq.c\
					ft_get_map.c
SRC				= $(addprefix srcs/,$(_SRC))
CFLAGS			= -Wall -Wextra -Werror
O_FILES			= $(patsubst %.c,%.o, $(_SRC))

#Define the libft
LIBFT_NAME		= libft.a
_LIBFT_SRC		= ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcat.c ft_strcmp.c\
				ft_strcpy.c ft_strlen.c ft_strlowcase.c ft_strrev.c\
				ft_strupcase.c ft_swap.c ft_strconcat.c ft_atoi.c
LIBFT_SRC		= $(addprefix lib/,$(_LIBFT_SRC))
_LIBFT_O_FILES	= $(patsubst %.c,%.o, $(_LIBFT_SRC))
LIBFT_O_FILES	= $(addprefix bin/,$(_LIBFT_O_FILES))

all: $(LIBFT_NAME) $(NAME)

$(NAME):
	@gcc $(CFLAGS) $(SRC) -Ofast -L . -lft -I includes/ -o $(NAME)
	@echo $(NAME)" compilled"

$(LIBFT_NAME):
	@mkdir bin
	@gcc -c $(CFLAGS) $(LIBFT_SRC) -I includes/
	@ar rc $(LIBFT_NAME) $(_LIBFT_O_FILES)
	@ranlib $(LIBFT_NAME)
	@mv $(_LIBFT_O_FILES) bin/
	@echo "Library FT compilled"

clean:
	@rm -rf bin
	@echo "Clean all .o files"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(LIBFT_NAME)
	@echo "Clean all .o and .a"

re: fclean all