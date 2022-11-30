# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:28:55 by besalort          #+#    #+#              #
#    Updated: 2022/11/30 13:58:05 by besalort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

SRCS =	ft_printf.c \
	ft_adress.c \
	ft_convertbase.c \
	ft_putchar_i.c \
	ft_putstr_i.c \
	ft_putnbr_i.c \
	ft_putnbr_u.c \

OBJS = ${SRCS:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -g -Wall -Werror -Wextra

AR = ar rcs

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	${AR} $(NAME) ${OBJS}

all:	$(NAME)

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} $(NAME)

re:	fclean all

.PHONY: all clean fclean re
	