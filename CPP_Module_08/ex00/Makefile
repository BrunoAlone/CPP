# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 13:16:58 by bruno             #+#    #+#              #
#    Updated: 2024/03/14 13:20:20 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

EASY_FIND = easy_find

SRCS_EASY_FIND = main.cpp

OBJS_EASY_FIND = $(SRCS_EASY_FIND:%.cpp=%.o)

all: $(EASY_FIND)

$(EASY_FIND): $(OBJS_EASY_FIND)
					$(CC) $(CCFLAGS) $(OBJS_EASY_FIND) -o $(EASY_FIND) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_EASY_FIND)

fclean: clean
		rm -rf $(EASY_FIND)

re: fclean all
