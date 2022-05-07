# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 22:00:06 by yoson             #+#    #+#              #
#    Updated: 2022/05/02 19:47:09 by yoson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFALGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
NAME = do-op
SRCS = $(SRCDIR)/main.c $(SRCDIR)/operator.c $(SRCDIR)/util.c
OBJECTS = $(SRCS:.c=.o)
all: $(NAME)
%.o: %.c
	$(CC) $(CFALGS) -c $< -o $@ -I $(INCDIR)
$(NAME): $(OBJECTS)
	$(CC) $(CFALGS) -o $(NAME) $(OBJECTS)
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
