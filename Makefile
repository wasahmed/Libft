# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:59:09 by wasahmed          #+#    #+#              #
#    Updated: 2019/05/21 07:26:28 by wasahmed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = *.c

OBJ_NAME = *.o 

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ_NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
