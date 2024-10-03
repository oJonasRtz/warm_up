# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 11:39:50 by jopereir          #+#    #+#              #
#    Updated: 2024/10/01 12:28:16 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Lib name
NAME = libft.a

#Directories
SRC_DIR    = srcs
HEADER_DIR = includes

#Files and paths
SRCS_FILES 	= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS_PATH 	= $(addprefix $(SRC_DIR)/, $(SRCS_FILES))
OBJS_FILES 	= $(SRCS_PATH:.c=.o)

#compiler
CC 		= cc
CCFLAGS = -Wall -Werror -Wextra -I$(HEADER_DIR)

all: $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS_FILES)
	ar rc $(NAME) $(OBJS_FILES)

clean:
	rm -f $(OBJS_FILES)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
