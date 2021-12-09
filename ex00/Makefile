# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 20:03:10 by pmedina-          #+#    #+#              #
#    Updated: 2021/12/09 20:43:07 by pmedina-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		=	template
SRCS 		=	main.cpp
CXX 		=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address
RM			=	rm -f
OBJS		=	$(SRCS:.cpp=.o)

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

NAME		:	$(OBJS)
				@$(CXX) $(CXXFLAGS) $^ -o $(NAME)

all			:	$(NAME)

clean		:
				@$(RM) $(OBJS)

fclean		:	clean
				@$(RM) $(NAME)

re			: clean all
