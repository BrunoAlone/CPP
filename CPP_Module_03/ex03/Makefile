# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 11:12:31 by bruno             #+#    #+#              #
#    Updated: 2024/01/18 11:33:23 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -Wshadow -g -std=c++98

CLAPTRAP = claptrap

SRCS_CLAPTRAP = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS_CLAPTRAP = $(SRCS_CLAPTRAP:%.cpp=%.o)

all: $(CLAPTRAP)

$(CLAPTRAP): $(OBJS_CLAPTRAP)
				$(CC) $(CCFLAGS) $(OBJS_CLAPTRAP) -o $(CLAPTRAP) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_CLAPTRAP)
fclean: clean
			rm -rf $(CLAPTRAP)
re: fcelan all
