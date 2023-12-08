# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 13:04:57 by brolivei          #+#    #+#              #
#    Updated: 2023/12/08 13:11:58 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

BRAIN = brain

SRCS_BRAIN = main.cpp

OBJS_BRAIN = $(SRCS_BRAIN:%.cpp=%.o)

all: $(BRAIN)

$(BRAIN): $(OBJS_BRAIN)

			$(CC) $(CCFLAGS) $(OBJS_BRAIN) -o $(BRAIN) -lstdc++

%.o: %.cpp
		$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_BRAIN)

fclean: clean
		rm -rf $(BRAIN)

re: fclean all
