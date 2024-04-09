# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/09 13:53:10 by brolivei          #+#    #+#              #
#    Updated: 2024/04/09 13:56:23 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

RPN = RPN

SRCS_RPN = main.cpp RPN.cpp

OBJS_RPN = $(SRCS_RPN:%.cpp=%.o)

all: $(RPN)

$(RPN): $(OBJS_RPN)
			$(CC) $(CCFLAGS) $(OBJS_RPN) -o $(RPN) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_RPN)

fclean: clean
			rm -rf $(RPN)
re: fclean all
