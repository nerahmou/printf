# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerahmou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:17:07 by nerahmou          #+#    #+#              #
#    Updated: 2017/12/31 18:12:19 by nerahmou    ###    #+. /#+    ###.fr      #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean
.SUFFIXES:
	blue = echo "\x1b[47m\x1b[32m\#\# $1 \#\# \x1b[0m \n"


NAME = exe

CC = gcc
#CFLAGS = #-Wall -Wextra -Werror -fsanitize=address

SRCS_PATH = srcs
SRCS_NAME = main.c \
			ft_printf.c 

SRCS = $(addprefix $(SRCS_PATH)/, $(SRCS_NAME))

OBJS_PATH = tmp
OBJS = $(addprefix $(OBJS_PATH)/, $(SRCS_NAME:.c=.o))

HEADER = include

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft/ re
	@$(CC) $(CFLAGS) $^ -L./libft -lft -o $(NAME)
	@$(call blue,"EXE created 👍 ")

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
	@mkdir -p tmp 
	@$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $^

clean:
	@rm -rf $(OBJS_PATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all
