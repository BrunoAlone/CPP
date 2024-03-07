# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 15:59:25 by bruno             #+#    #+#              #
#    Updated: 2024/03/07 17:26:11 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

REALTYPE = realtype

SRCS_REALTYPE = main.cpp Base.cpp

OBJS_REALTYPE = $(SRCS_REALTYPE:%.cpp=%.o)

all: $(REALTYPE)

$(REALTYPE): $(OBJS_REALTYPE)
		$(CC) $(CCFLAGS) $(OBJS_REALTYPE) -o $(REALTYPE) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_REALTYPE)

fclean: clean
		rm -rf $(REALTYPE)

re: fclean all
