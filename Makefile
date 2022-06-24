# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew < mliew@student.42kl.edu.my>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 17:35:32 by mliew             #+#    #+#              #
#    Updated: 2022/06/24 19:32:40 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRC		= printf putchar putstr putnbr puthex putpointer putunsign len_hex
SRCS	= $(addprefix ft_, $(addsuffix .c, $(SRC)))
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I ./
AR		= ar rcs
RM		= rm -f
LIBFT	= libft

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re $(LIBFT) $(NAME)