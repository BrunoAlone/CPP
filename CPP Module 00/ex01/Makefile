# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 12:37:30 by brolivei          #+#    #+#              #
#    Updated: 2023/10/23 15:00:20 by brolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

PHONEBOOK = phonebook_run

SRCS_PHONEBOOK = main.cpp Phonebook.cpp Adding.cpp Contact.cpp InitialPrompt.cpp Rules.cpp

OBJS_PHONEBOOK = $(SRCS_PHONEBOOK:.cpp=.o)

all: $(PHONEBOOK)

$(PHONEBOOK): $(OBJS_PHONEBOOK)
				$(CC) $(CCFLAGS) $(OBJS_PHONEBOOK) -o $(PHONEBOOK) -lstdc++

%.o: %.cpp
				$(CC) $(CCFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJS_PHONEBOOK)

fclean: clean
				rm -rf $(PHONEBOOK)

re: fclean all
