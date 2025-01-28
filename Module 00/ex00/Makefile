# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 16:07:22 by rdedola           #+#    #+#              #
#    Updated: 2025/01/13 18:04:20 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

DEF_COLOR = \033[0;39m
COLOR = \033[1;32m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo "${COLOR}╔═══════════════════════════╗${DEF_COLOR}"
	@echo "${COLOR}║    Megaphone compiled!    ║${DEF_COLOR}"
	@echo "${COLOR}╚═══════════════════════════╝${DEF_COLOR}"

clean:
	@rm -f $(OBJ)
	@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
	@echo "${COLOR}║    Megaphone cleaned!    ║${DEF_COLOR}"
	@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
