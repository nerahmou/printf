# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerahmou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:17:07 by nerahmou          #+#    #+#              #
#    Updated: 2018/01/19 10:10:10 by nerahmou    ###    #+. /#+    ###.fr      #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean
.SUFFIXES:
	blue = echo "\x1b[47m\x1b[32m\#\# $1 \#\# \x1b[0m \n"


NAME = libftprintf.a

CC = gcc
CFLAGS =  -Wall -Wextra -Werror

SRC_PATH = ./srcs
LIB_PATH = ./lib
TEST_PATH = ./test
INC_PATH = ./include
OBJ_PATH = ./obj
OBJLIB_PATH = ./obj

SRC_NAME =	ft_printf.c\
			get_attributs.c \
			init_suitcase.c \
			check_attributs.c \
			check_color_style.c \
			get_ret_value.c \
			print.c \
			print_s.c \
			print_ws.c \
			print_c.c \
			print_d.c \
			print_b.c \
			print_o.c \
			print_u.c \
			print_x.c \
			print_p.c \
			print_m.c \
			nbr_size.c

LIB_NAME = 	ft_abs.c\
			ft_atoi.c\
			ft_strlen.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putnbr_base.c\
			ft_putwchar.c\
			ft_putwstr.c\
			ft_putstr.c\
			ft_strncmp.c \
			ft_strchr.c \
			ft_strlen.c\
			ft_wstrlen.c\
			nbrlen.c\
			wcharlen.c\

INC_NAME = ft_printf.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJLIB_PATH)/,$(OBJLIB_NAME))

all: $(NAME)

$(NAME): $(OBJ) $(OBJLIB)
	@ar rcs $(NAME) $(OBJ) $(OBJLIB)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -o $@ -c $<

$(OBJLIB_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir $(OBJLIB_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\033[1;34mft_printf\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf ./obj $(NAME)
	@echo "\033[1;34mft_printf\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
