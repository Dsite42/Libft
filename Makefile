# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 15:39:27 by cgodecke          #+#    #+#              #
#    Updated: 2022/12/18 16:13:45 by cgodecke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CC_FLAGS = -Wall -Wextra -Werror
INFILES = *.c
OBJFILES = $(INFILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) -c $(CC_FLAGS) $(INFILES)
	$(CC) -o $(NAME) $(OBJFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

x: fclean
	make
	make clean
.PHONY: all clean fclean x