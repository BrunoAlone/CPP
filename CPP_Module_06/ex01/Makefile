# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 17:09:14 by bruno             #+#    #+#              #
#    Updated: 2024/03/06 17:24:18 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

SERIALIZER = serializer

SRCS_SERIALIZER = main.cpp Serializer.cpp

OBJS_SERIALIZER = $(SRCS_SERIALIZER:%.cpp=%.o)

all: $(SERIALIZER)

$(SERIALIZER): $(OBJS_SERIALIZER)
					$(CC) $(CCFLAGS) $(OBJS_SERIALIZER) -o $(SERIALIZER) -lstdc++

%.o: %.cpp
				$(CC) $(CCFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJS_SERIALIZER)
fclean: clean
				rm -rf $(SERIALIZER)
re: fclean all
