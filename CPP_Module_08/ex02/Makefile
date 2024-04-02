# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 10:17:14 by brolivei          #+#    #+#              #
#    Updated: 2024/04/02 12:11:19 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

MUTANT_STACK = mutant_stack

SRCS_MUTANT_STACK = main.cpp

OBJS_MUTANT_STACK = $(SRCS_MUTANT_STACK:%.cpp=%.o)

all: $(MUTANT_STACK)

$(MUTANT_STACK): $(OBJS_MUTANT_STACK)
					$(CC) $(CCFLAGS) $(OBJS_MUTANT_STACK) -o $(MUTANT_STACK) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_MUTANT_STACK)

fclean: clean
			rm -rf $(MUTANT_STACK)

re: fclean all
