# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 12:29:56 by jjosephi          #+#    #+#              #
#    Updated: 2019/09/18 18:06:13 by jjosephi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
FLAGS = -Wall -Wextra -Werror

$(NAME) :
	gcc -c $(FLAGS) *.c libft.h
	ar rc libft.a *.o

all : re

compile :
	gcc $(FLAGS) *.c

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f libft.a

re : fclean $(NAME)
