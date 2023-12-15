# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 11:51:51 by bruno             #+#    #+#              #
#    Updated: 2023/12/15 11:58:56 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

HARL = harl

SRCS_HARL =

OBJS_HARL = $(SRCS_HARL:%.cpp=%.o)

all: $(HARL)

$(HARL): $(OBJS_HARL)
			$(CC $(CCFLAGS) $(OBJS_HARL) -o $(HARL) -lstdc++

%.o: %.cpp

		$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_HARL)

fclean: clean

		rm -rf $(HARL)

re: fclean all
