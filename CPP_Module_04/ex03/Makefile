# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 12:55:13 by brolivei          #+#    #+#              #
#    Updated: 2024/01/30 13:46:17 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

INTERFACE = interface

SRCS_INTERFACE = main.cpp

OBJS_INTERFACE = $(SRCS_INTERFACE:%.cpp=%.o)

all: $(INTERFACE)

$(INTERFACE): $(OBJS_INTERFACE)
				$(CC) $(CCFLAGS) $(OBJS_INTERFACE) -o $(INTERFACE) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_INTERFACE)

fclean: clean
			rm -rf $(INTERFACE)

re: fclean all
