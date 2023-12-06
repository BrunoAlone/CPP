# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 15:02:40 by brolivei          #+#    #+#              #
#    Updated: 2023/10/20 15:06:16 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

BANK = bank

SRCS_BANK = tests.cpp Account.cpp

OBJS_BANK = $(SRCS_BANK:.cpp=.o)

all: $(BANK)

$(BANK): $(OBJS_BANK)
			$(CC) $(CCFLAGS) $(OBJS_BANK) -o $(BANK) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJS_BANK)

fclean: clean
				rm -rf $(BANK)

re: fclean all

