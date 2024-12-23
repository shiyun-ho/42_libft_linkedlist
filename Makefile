# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shiyun <shiyun@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 18:38:42 by hshi-yun          #+#    #+#              #
#    Updated: 2024/12/21 22:08:22 by shiyun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a



CC =gcc
CFLAGS =-Wall -Wextra -Werror

SRC = ft_putchar_fd.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_toupper.c \
	  ft_tolower.c ft_strnstr.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memmove.c ft_putstr_fd.c ft_putendl_fd.c ft_strlcat.c ft_strchr.c \
	  ft_strrchr.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c \
	  ft_striteri.c ft_split.c \

BONUS_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME) 

$(NAME) : $(OBJ)
	@echo ">>> Starting background processing and indexing of files into lib"
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo ">>> Processing and indexing completed."
 
%.o : %.c
	@echo ">>> Compiling .c files to .o files"
	$(CC) $(CFLAGS) -c -o $@ $^

norminette: 
	@echo ">>> Checking norminette for all files"
	norminette -R CheckForbiddenSourceHeader $(SRC) $(SRC_BONUS)

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

clean: 
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

test: $(NAME) test.c
	cc -o test test.c -L. -lft

.PHONY: all norminette clean fclean re bonus test
