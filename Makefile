# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerahmou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 09:17:07 by nerahmou          #+#    #+#              #
#    Updated: 2018/01/06 00:07:25 by nerahmou    ###    #+. /#+    ###.fr      #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean
.SUFFIXES:
	blue = echo "\x1b[47m\x1b[32m\#\# $1 \#\# \x1b[0m \n"


NAME = libftprintf.a

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

SRC_PATH = ./srcs
LIB_PATH = ./lib
INC_PATH = ./include
OBJ_PATH = ./obj
OBJLIB_PATH = ./obj

SRC_NAME =	ft_printf.c\
			get_attributs.c \
			init_suitcase.c \
			init_funptr.c \
			check_attributs.c \
			print.c \
			print_s.c \
			print_c.c \
			print_d.c \
			print_o.c \
			print_u.c \
			print_x.c \
			print_p.c \
			print_m.c 

LIB_NAME = 	ft_abs.c\
			ft_atoi.c\
			ft_bzero.c\
			ft_itoa.c\
			ft_strlen.c\
			ft_strdup.c\
			ft_itoa_base_low.c\
			ft_itoa_base_upp.c\
			ft_memalloc.c\
			ft_memset.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putnbr_base.c\
			ft_putwchar.c\
			ft_putwstr.c\
			ft_putstr.c\
			ft_strchr.c \
			ft_strdup.c\
			ft_strlen.c\
			ft_strnew.c\
			nbrlen.c\
			wcharlen.c

INC_NAME = ft_printf.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJLIB_PATH)/,$(OBJLIB_NAME))

ifdef ALLOCWRAP
	LDFLAGS += $(HOME)/projects/alloc_wrap.c -ldl
endif

all: $(NAME)

$(NAME): $(OBJ) $(OBJLIB) main.o
	@ar rcs $(NAME) $(OBJ) $(OBJLIB)
	$(CC) $(LDFLAGS) main.o libftprintf.a -o exe 

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

$(OBJLIB_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir $(OBJLIB_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

main.o: main.c
	@$(CC) -o $@ -c $<


clean:
	@rm -rf $(OBJ_PATH) main.o exe
	@echo "\033[1;34mft_printf\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf ./obj $(NAME)
	@echo "\033[1;34mft_printf\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
