# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houattou <houattou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 15:40:24 by houattou          #+#    #+#              #
#    Updated: 2023/10/09 15:40:26 by houattou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re