# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 14:25:56 by bruno             #+#    #+#              #
#    Updated: 2024/02/16 14:45:18 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

SCALAR = scalar

SRCS_SCALAR = main.cpp ScalarConverter.cpp

OBJS_SCALAR = $(SRCS_SCALAR:%.cpp=%.o)

all: $(SCALAR)

$(SCALAR): $(OBJS_SCALAR)
				$(CC) $(CCFLAGS) $(OBJS_SCALAR) -o $(SCALAR) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_SCALAR)

fclean: clean
			rm -rf $(SCALAR)

re: fclean all
