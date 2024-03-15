# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 14:03:25 by bruno             #+#    #+#              #
#    Updated: 2024/03/13 13:25:48 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

TEMPLATE = template

SRCS_TEMPLATE = main.cpp

OBJS_TEMPLATE = $(SRCS_TEMPLATE:%.cpp=%.o)

all: $(TEMPLATE)

$(TEMPLATE): $(OBJS_TEMPLATE)
				$(CC) $(CCFLAGS) $(OBJS_TEMPLATE) -o $(TEMPLATE) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_TEMPLATE)

fclean: clean
		rm -rf $(TEMPLATE)

re: fclean all
