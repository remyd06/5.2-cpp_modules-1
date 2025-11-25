# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 09:34:23 by rdedola           #+#    #+#              #
#    Updated: 2025/11/25 12:19:40 by rdedola          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	Identify

# Files
SRC			:=	sources/main.cpp \
				sources/identifyPointer.cpp\
				sources/identifyReference.cpp\
				sources/randomGeneration.cpp\


# Variables
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -Iincludes -fsanitize=address -g

# Colors
DEF_COLOR	= \033[0;39m
COLOR		= \033[1;32m

# Makefile
all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}
				@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
				@echo "${COLOR}║    Real Type compiled    ║${DEF_COLOR}"
				@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"
				

clean		:
				rm -rf ${EXE}
				@echo "${COLOR}╔══════════════════════════╗${DEF_COLOR}"
				@echo "${COLOR}║    Real Type cleaned!    ║${DEF_COLOR}"
				@echo "${COLOR}╚══════════════════════════╝${DEF_COLOR}"

re			:	clean all

.PHONY		:	all clean re
