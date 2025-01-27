# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 10:46:41 by rdedola           #+#    #+#              #
#    Updated: 2025/01/16 13:05:09 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	phonebook

# Files
SRC			:=	./source/main.cpp \
				./source/PhoneBook.cpp \
				./source/Contact.cpp \

# Variables
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -Iincludes

# Colors
DEF_COLOR	= \033[0;39m
COLOR		= \033[1;32m

# Makefile
all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}
				@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
				@echo "${COLOR}║    PhoneBook compiled    ║${DEF_COLOR}"
				@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"
				

clean		:
				rm -rf ${EXE}
				@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
				@echo "${COLOR}║    PhoneBook cleaned!    ║${DEF_COLOR}"
				@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"

re			:	clean all

.PHONY		:	all clean re
