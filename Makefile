# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/05 17:47:26 by sdube             #+#    #+#              #
#    Updated: 2016/06/05 17:47:39 by sdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = get_next_line.c  geometry.c main.c minitools.c utils.c exit_on_error.c

LIBS = .

NAME = fdf

all: $(NAME)

FLAGS = -Werror -Wall -Wextra

$(NAME):
	make -C libft/ clean fclean all
	gcc -I libft $(SRC) $(FLAGS) -o $(NAME) -L$(LIBS) -L libft/ -l ft -lmlx -framework OpenGL -framework AppKit

clean:
	make -C libft/ clean
	rm -f $(NAME)

fclean:
	make -C libft/ fclean
