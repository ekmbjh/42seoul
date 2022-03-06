# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junbaek <junbaek@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 15:10:15 by junbaek           #+#    #+#              #
#    Updated: 2022/03/06 14:33:55 by junbaek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_DIR = .
LIBFT = libft.a
LIBFT_DIR = ./libft
LIBFT_LIB = $(LIBFT_DIR)/$(LIBFT)
INCS = .

AFLAGS = rus

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c print_number.c print_string.c utils.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	rm -rf $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean : clean
	rm -rf $(NAME)
	make fclean -C $(LIBFT_DIR)

re : fclean all

$(NAME) : $(OBJS) $(LIBFT)
	cp $(LIBFT_LIB) $@
	ar $(AFLAGS) $@ $(OBJS)

$(LIBFT) : $(LIBFT_LIB)

$(LIBFT_LIB) :
	make -C $(LIBFT_DIR)

%.o : %.c
	$(CC) $(CFLAGS) -c $?

.PHONY : all clean fclean re 
