# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 15:33:48 by bruno             #+#    #+#              #
#    Updated: 2023/12/15 15:45:43 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

HARL_FILTER = harlFilter

SRCS_HARL_FILTER = main.cpp Harl.cpp

OBJS_HARL_FILTER = $(SRCS_HARL_FILTER:%.cpp=%.o)

all: $(HARL_FILTER)

$(HARL_FILTER): $(OBJS_HARL_FILTER)
					$(CC) $(CCFLAGS) $(OBJS_HARL_FILTER) -o $(HARL_FILTER) -lstdc++

%.o: %.cpp

		$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_HARL_FILTER)

fclean: clean
		rm -rf $(HARL_FILTER)

re: fclean all
