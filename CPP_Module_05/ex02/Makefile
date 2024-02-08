# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 13:26:41 by brolivei          #+#    #+#              #
#    Updated: 2024/02/08 14:44:58 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

BUREAUCRAT = bureaucrat

SRCS_BUREAUCRAT = main.cpp Bureaucrat.cpp AForm.cpp

OBJS_BUREAUCRAT = $(SRCS_BUREAUCRAT:%.cpp=%.o)

all: $(BUREAUCRAT)

$(BUREAUCRAT): $(OBJS_BUREAUCRAT)
					$(CC) $(CCFLAGS) $(OBJS_BUREAUCRAT) -o $(BUREAUCRAT) -lstdc++

%.o: %.cpp
			$(CC) $(CCFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_BUREAUCRAT)

fclean: clean
			rm -rf $(BUREAUCRAT)

re: fclean all
