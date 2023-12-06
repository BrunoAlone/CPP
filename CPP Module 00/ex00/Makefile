# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 11:18:45 by brolivei          #+#    #+#              #
#    Updated: 2023/10/17 13:07:03 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

MEGAPHONE = megaphone

SRCS_MEGAPHONE = megaphone.cpp

OBJS_MEGAPHONE = $(SRCS_MEGAPHONE:.cpp=.o)

all: $(MEGAPHONE)

$(MEGAPHONE): $(OBJS_MEGAPHONE)

				$(CC) $(CCFLAGS) $(OBJS_MEGAPHONE) -o $(MEGAPHONE) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_MEGAPHONE)

fclean: clean

			rm -rf $(MEGAPHONE)

re: fclean all
