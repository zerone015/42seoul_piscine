# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoson <yoson@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 22:03:01 by yoson             #+#    #+#              #
#    Updated: 2022/05/01 23:34:50 by yoson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
NAME = rush-02
SRCS = $(SRCDIR)/main.c $(SRCDIR)/check.c $(SRCDIR)/rush_free.c $(SRCDIR)/rush_init.c $(SRCDIR)/parser.c $(SRCDIR)/util.c $(SRCDIR)/util2.c $(SRCDIR)/print.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
