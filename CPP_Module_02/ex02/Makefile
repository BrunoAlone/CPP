# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 15:50:12 by brolivei          #+#    #+#              #
#    Updated: 2024/01/08 15:53:29 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

FIXED = fixed

SRCS_FIXED = main.cpp Fixed.cpp

OBJS_FIXED = $(SRCS_FIXED:%.cpp=%.o)

all: $(FIXED)

$(FIXED): $(OBJS_FIXED)
			$(CC) $(CCFLAGS) $(OBJS_FIXED) -o $(FIXED) -lstdc++ -lm

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_FIXED)

flcean: clean
			rm -rf $(FIXED)

re: fclean all
