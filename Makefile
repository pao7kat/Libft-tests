# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschiete <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 17:00:40 by pschiete          #+#    #+#              #
#    Updated: 2024/10/26 16:50:47 by pschiete         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =  \
	 ft_isalpha.c\
	 ft_isdigit.c\
	 ft_isprint.c\
	 ft_isascii.c\
	 ft_isalnum.c\
	 ft_tolower.c\
	 ft_toupper.c\
	 ft_strlen.c\
	 ft_strlcat.c\
	 ft_strlcpy.c\
	 ft_strchr.c\
	 ft_memset.c\
	 ft_bzero.c\
	 ft_strncmp.c\
	 ft_strnstr.c\
	 ft_strrchr.c\
	 ft_memcpy.c\
	 ft_memcmp.c\
	 ft_memchr.c\
	 ft_memmove.c\
	 ft_atoi.c\
	 ft_calloc.c\
	 ft_strdup.c\
	 ft_putchar_fd.c\
	 ft_substr.c\
	 ft_strjoin.c\
	 ft_putnbr_fd.c\
	 ft_putendl_fd.c\
	 ft_putstr_fd.c\
	 ft_striteri.c\
	 ft_strtrim.c\
	 ft_strmapi.c\
	 ft_itoa.c\
	 ft_split.c\

BSOURCES = \
	     ft_lstnew.c\
	     ft_lstadd_front.c\
	     ft_lstsize.c\
	     ft_lstlast.c\
	     ft_lstadd_back.c\
	     ft_lstdelone.c\
	     ft_lstclear.c\
	     ft_lstiter.c\
	     ft_lstmap.c\

OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
