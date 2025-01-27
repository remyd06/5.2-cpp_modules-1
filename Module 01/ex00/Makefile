# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 09:20:30 by rdedola           #+#    #+#              #
#    Updated: 2025/01/27 10:33:31 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	zombie

# Files
SRC			:=	./source/main.cpp \
				./source/randomChump.cpp \
				./source/newZombie.cpp \
				./source/Zombie.cpp \

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
				@echo "${COLOR}║     Zombie compiled      ║${DEF_COLOR}"
				@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"
				

clean		:
				rm -rf ${EXE}
				@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
				@echo "${COLOR}║      Zombie cleaned!     ║${DEF_COLOR}"
				@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"

re			:	clean all

.PHONY		:	all clean re
