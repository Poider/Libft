# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 08:51:56 by mel-amma          #+#    #+#              #
#    Updated: 2021/11/14 16:16:25 by mel-amma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = ${SRCS:.c=.o}

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUSOBJS= $(BONUS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Libft is ready"

bonus : $(BONUSOBJS)
	$(AR) $(NAME) $(BONUSOBJS)

clean :
	$(RM) $(OBJS) $(BONUSOBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus