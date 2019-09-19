# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjosephi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 12:29:56 by jjosephi          #+#    #+#              #
#    Updated: 2019/09/17 15:14:38 by jjosephi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib
FLAGS = -Wall -Wextra -Werror
FILES = ft_memset.c libft.h

$(NAME) :
	gcc -c $(FLAGS) $(FILES)
	ar rc libft.a *.o

compile :
	gcc $(FLAGS) *.c

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f libft.a

re : fclean $(NAME)
