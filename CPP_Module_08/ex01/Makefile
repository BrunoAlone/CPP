# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 14:19:57 by brolivei          #+#    #+#              #
#    Updated: 2024/03/28 14:32:34 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

SPAN = span

SRCS_SPAN = main.cpp Span.cpp

OBJS_SPAN = $(SRCS_SPAN:%.cpp=%.o)

all: $(SPAN)

$(SPAN): $(OBJS_SPAN)
			$(CC) $(CCFLAGS) $(OBJS_SPAN) -o $(SPAN) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_SPAN)

fclean: clean
			rm -rf $(SPAN)

re: fclean all
