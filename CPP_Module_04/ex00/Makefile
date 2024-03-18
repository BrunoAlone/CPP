# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 10:25:01 by brolivei          #+#    #+#              #
#    Updated: 2024/03/18 14:05:40 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

POLYMORPHISM = polymorphism

SRCS_POLYMORPHISM = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS_POLYMORPHISM = $(SRCS_POLYMORPHISM:%.cpp=%.o)

all: $(POLYMORPHISM)

$(POLYMORPHISM): $(OBJS_POLYMORPHISM)
					$(CC) $(CCFLAGS) $(OBJS_POLYMORPHISM) -o $(POLYMORPHISM) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_POLYMORPHISM)

fclean: clean
			rm -rf $(POLYMORPHISM)

re: fclean all
