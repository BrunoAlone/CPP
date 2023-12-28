# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruno <bruno@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 11:05:46 by bruno             #+#    #+#              #
#    Updated: 2023/12/28 11:10:29 by bruno            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = C++
CCFLAGS = -Wall -Wextra -Werror -g -std=c++98

FIXED = fixed

SRCS_FIXED = main.cpp Fixed.cpp

OBJS_FIXED = $(SRCS_FIXED:%.cpp=%.o)

all: $(FIXED)

$(FIXED): $(OBJS_FIXED)
			$(CC) $(CCFLAGS) $(OBJS_FIXED) -o $(FIXED) -lstdc++

%.o: %.cpp

		$(CC) $(CCFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS_FIXED)

fclean: clean
		rm -rf $(FIXED)

re: fclean all
