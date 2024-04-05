# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 14:25:45 by brolivei          #+#    #+#              #
#    Updated: 2024/04/05 14:29:23 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

BTC = btc

SRCS_BTC = main.cpp BitcoinExchange.cpp

OBJS_BTC = $(SRCS_BTC:%.cpp=%.o)

all: $(BTC)

$(BTC): $(OBJS_BTC)
			$(CC) $(CCFLAGS) $(OBJS_BTC) -o $(BTC) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_BTC)

fclean: clean
			rm -rf $(BTC)

re: fclean all
