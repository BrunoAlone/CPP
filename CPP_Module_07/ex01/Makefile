# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 13:36:52 by bruno             #+#    #+#              #
#    Updated: 2024/03/13 13:40:23 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

TEMPLATE_ITER = template_iter

SRCS_TEMPLATE_ITER = main.cpp

OBJS_TEMPLATE_ITER = $(SRCS_TEMPLATE_ITER:%.cpp=%.o)

all: $(TEMPLATE_ITER)

$(TEMPLATE_ITER): $(OBJS_TEMPLATE_ITER)
						$(CC) $(CCFLAGS) $(OBJS_TEMPLATE_ITER) -o $(TEMPLATE_ITER) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_TEMPLATE_ITER)

fclean: clean
		rm -rf $(TEMPLATE_ITER)

re: fclean all
