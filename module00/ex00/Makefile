# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gt-serst <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 14:37:35 by gt-serst          #+#    #+#              #
#    Updated: 2024/01/08 17:28:18 by gt-serst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp

NAME	= Megaphone

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
