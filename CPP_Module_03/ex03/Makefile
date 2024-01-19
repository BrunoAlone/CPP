# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 11:12:31 by bruno             #+#    #+#              #
#    Updated: 2024/01/19 17:58:55 by bruno            ###   ########.fr        #
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
re: fclean all
