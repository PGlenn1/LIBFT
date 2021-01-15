# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpiriou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/04 17:29:28 by gpiriou           #+#    #+#              #
#    Updated: 2021/01/06 12:22:52 by gpiriou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS	= ft_atoi_base.c ft_atoi_lu.c ft_free_all.c ft_free_tab.c ft_islower.c\
		  ft_isupper.c ft_itoa_base.c ft_itoa_base_lu.c ft_len_n.c\
		  ft_print_address.c ft_print_list.c ft_putnbr_base.c\
		  ft_strcmp.c ft_skip_non_printable.c ft_strndup.c\
		  ft_valid_base.c ft_word_count.c
 
OBJS	= ${SRCS:.c=.o}

OBJBONUS = ${BONUS:.c=.o}

INC		= -I includes 

NAME	= libft.a

CC		= gcc 

RM		= rm -f

CFLAGS 	= -Wall -Wextra -Werror


$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}
			
.c.o:
			${CC} ${CFLAGS} ${INC} -c $< -o ${<:.c=.o}
			
bonus: 		${NAME} ${OBJBONUS}
			ar rcs ${NAME} ${OBJS} ${OBJBONUS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
