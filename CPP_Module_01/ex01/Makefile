# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 13:50:58 by brolivei          #+#    #+#              #
#    Updated: 2023/12/07 15:54:43 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

MOAR_BRAINZ = more_brainz

SRCS_MOAR_BRAINZ = main.cpp Zombie.cpp zombieHorde.cpp

OBJS_MOAR_BRAINZ = $(patsubst %.cpp,obj/%.o,$(SRCS_MOAR_BRAINZ))

all: $(MOAR_BRAINZ)

$(MOAR_BRAINZ): | obj $(OBJS_MOAR_BRAINZ)

					$(CC) $(CCFLAGS) $(OBJS_MOAR_BRAINZ) -o $(MOAR_BRAINZ) -lstdc++

obj:
		mkdir -p obj

obj/%.o: %.cpp | obj
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_MOAR_BRAINZ)

fclean: clean
			rm -rf $(MOAR_BRAINZ)
