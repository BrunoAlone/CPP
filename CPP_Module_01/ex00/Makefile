# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 11:51:02 by brolivei          #+#    #+#              #
#    Updated: 2024/01/02 14:45:10 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

BRAIIINNNZZZ = braiiinnnzzz

SRCS_BRAIIINNNZZZ = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS_BRAIIINNNZZZ = $(patsubst %.cpp,obj/%.o,$(SRCS_BRAIIINNNZZZ))

all: $(BRAIIINNNZZZ)

$(BRAIIINNNZZZ): | obj $(OBJS_BRAIIINNNZZZ)

					$(CC) $(CCFLAGS) $(OBJS_BRAIIINNNZZZ) -o $(BRAIIINNNZZZ) -lstdc++

obj:
		mkdir -p obj

obj/%.o: %.cpp | obj
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_BRAIIINNNZZZ)

fclean: clean
			rm -rf $(BRAIIINNNZZZ)

re: fclean all
