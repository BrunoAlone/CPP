# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 16:33:01 by brolivei          #+#    #+#              #
#    Updated: 2024/04/10 16:36:21 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror

PMERGEME = PmergeMe

SRCS_PMERGEME = main.cpp PmergeMe.cpp

OBJS_PMERGEME = $(SRCS_PMERGEME:%.cpp=%.o)

all: $(PMERGEME)

$(PMERGEME): $(OBJS_PMERGEME)
				$(CC) $(CCFLAGS) $(OBJS_PMERGEME) -o $(PMERGEME) -lstdc++

%.o: %.cpp
				$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_PMERGEME)

fclean: clean
		rm -rf $(PMERGEME)

re: fclean all
