# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopereir <jopereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 14:12:22 by jopereir          #+#    #+#              #
#    Updated: 2024/10/03 10:06:03 by jopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS_FILES  = ft_display_file.c
OBJS_FILES	= $(SRCS_FILES:.c=.o)

CC 		= gcc
CCFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS_FILES)
	$(CC) $(CCFLAGS) -o $(NAME) $(SRCS_FILES)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_FILES)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re