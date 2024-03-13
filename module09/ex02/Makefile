# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 14:37:35 by gt-serst          #+#    #+#              #
#    Updated: 2024/03/13 12:44:48 by gt-serst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp\
		  PmergeMe.cpp

NAME	= PmergeMe

FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

${NAME} : ${OBJS}
					c++ ${FLAGS} $(OBJS) -o $(NAME)

all		: ${NAME}

%.o:%.cpp
					c++ ${FLAGS} -c $< -o $@

clean	:
					rm -rf ${OBJS}

fclean	: clean
					rm -rf ${NAME}

re		: fclean all

.PHONY	: all clean fclean re NAME
