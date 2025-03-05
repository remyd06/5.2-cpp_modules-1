# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 15:59:59 by rdedola           #+#    #+#              #
#    Updated: 2025/02/05 09:17:57 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	./source/main.cpp \
		./source/Contact.cpp \
		./source/PhoneBook.cpp \

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

DEF_COLOR = \033[0;39m
COLOR = \033[1;32m

all: $(NAME)

$(NAME): $(SRC)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)
	@echo "${COLOR}╔═══════════════════════════╗${DEF_COLOR}"
	@echo "${COLOR}║    Phonebook compiled!    ║${DEF_COLOR}"
	@echo "${COLOR}╚═══════════════════════════╝${DEF_COLOR}"

clean:
	@rm -f $(NAME)
	@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
	@echo "${COLOR}║    Phonebook cleaned!    ║${DEF_COLOR}"
	@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"

re: clean all

.PHONY: all clea re
