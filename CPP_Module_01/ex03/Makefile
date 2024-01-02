# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 16:35:15 by brolivei          #+#    #+#              #
#    Updated: 2023/12/22 12:08:20 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

UN_VIOLENCE = un_violence

SRCS_UN_VIOLENCE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS_UN_VIOLENCE = $(patsubst %.cpp,obj/%.o,$(SRCS_UN_VIOLENCE))

all: $(UN_VIOLENCE)

$(UN_VIOLENCE): | obj $(OBJS_UN_VIOLENCE)

					$(CC) $(CCFLAGS) $(OBJS_UN_VIOLENCE) -o $(UN_VIOLENCE) -lstdc++

obj:
		mkdir -p -v obj

obj/%.o: %.cpp | obj
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_UN_VIOLENCE)

fclean: clean
		rm -rf $(UN_VIOLENCE)

re: fclean all
