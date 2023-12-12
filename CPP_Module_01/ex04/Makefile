# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 14:08:53 by brolivei          #+#    #+#              #
#    Updated: 2023/12/12 14:40:37 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

SED_IS_FOR_LOSERS = sed_is_for_losers

SRCS_SED_IS_FOR_LOSERS = main.cpp Replace.cpp

OBJS_SED_IS_FOR_LOSERS = $(SRCS_SED_IS_FOR_LOSERS:%.cpp=%.o)

all: $(SED_IS_FOR_LOSERS)

$(SED_IS_FOR_LOSERS): $(OBJS_SED_IS_FOR_LOSERS)

						$(CC) $(CCFLGAS) $(OBJS_SED_IS_FOR_LOSERS) -o $(SED_IS_FOR_LOSERS) -lstdc++

%.o: %.cpp

		$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_SED_IS_FOR_LOSERS)

fclean: clean
		rm -rf $(SED_IS_FOR_LOSERS)

re: fclean all
