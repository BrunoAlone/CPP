# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 13:26:41 by brolivei          #+#    #+#              #
#    Updated: 2024/02/12 16:56:51 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

BUREAUCRAT = bureaucrat

SRCS_BUREAUCRAT = main.cpp Bureaucrat.cpp AForm.cpp\
					ShrubberyCreationForm.cpp\
					RobotomyRequestForm.cpp\
					PresidentialPardonForm.cpp

OBJS_DIR = objs

OBJS_BUREAUCRAT = $(SRCS_BUREAUCRAT:%.cpp=$(OBJS_DIR)/%.o)

all: $(BUREAUCRAT)

$(BUREAUCRAT): $(OBJS_BUREAUCRAT)
					$(CC) $(CCFLAGS) $(OBJS_BUREAUCRAT) -o $(BUREAUCRAT) -lstdc++

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
			$(CC) $(CCFLAGS) -c $< -o $@

$(OBJS_DIR):
			mkdir -p $(OBJS_DIR)

clean:
			rm -rf $(OBJS_BUREAUCRAT) $(OBJS_DIR)

fclean: clean
			rm -rf $(BUREAUCRAT) $(OBJS_DIR)

re: fclean all
