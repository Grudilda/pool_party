# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 18:20:16 by abonte-b          #+#    #+#              #
#    Updated: 2024/03/27 18:33:42 by abonte-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a

CC 			= 	gcc

CFLAGS 		= 	-Wall -Wextra -Werror

INCDIR		=	includes

HEADER		=	$(includes)ft.h

SRCDIR 		= 	srcs/

SOURCE_PATH	=	$(SRCDIR)

SOURCES 	= 	ft_putchar.c 	ft_swap.c 		ft_putstr.c \
				ft_strlen.c		ft_strcmp.c

OBJECTS 	= 	$(SOURCES:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all
