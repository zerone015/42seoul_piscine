# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 22:00:06 by yoson             #+#    #+#              #
#    Updated: 2022/05/02 16:09:24 by yoson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC_DIR = ./srcs
HEADER_DIR = ./includes
SRCS = $(SRC_DIR)/ft_putchar.o \
		$(SRC_DIR)/ft_swap.o \
		$(SRC_DIR)/ft_putstr.o \
		$(SRC_DIR)/ft_strlen.o \
		$(SRC_DIR)/ft_strcmp.o
OBJS = $(SRCS:.c=*.o)
CFLAGS = -I$(HEADER_DIR) -Wall -Wextra -Werror
NAME = libft.a
REMOVE = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	ar -crs $@ $^

clean : $(OBJS)
	$(REMOVE) $^

fclean : clean
	$(REMOVE) $(NAME)

re :
	make fclean; make all

.PHONY: clean fclean re all
