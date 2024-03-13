# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 14:18:02 by bruno             #+#    #+#              #
#    Updated: 2024/03/13 14:28:44 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS= -Wall -Wextra -Werror -g -std=c++98

TEMPLATE_ARRAY = template_array

SRCS_TEMPLATE_ARRAY = main.cpp

OBJS_TEMPLATE_ARRAY = $(SRCS_TEMPLATE_ARRAY:%.cpp=%.o)

all: $(TEMPLATE_ARRAY)

$(TEMPLATE_ARRAY): $(OBJS_TEMPLATE_ARRAY)
						$(CC) $(CCFLAGS) $(OBJS_TEMPLATE_ARRAY) -o $(TEMPLATE_ARRAY) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_TEMPLATE_ARRAY)

fclean: clean
		rm -rf $(TEMPLATE_ARRAY)

re: fclean all
