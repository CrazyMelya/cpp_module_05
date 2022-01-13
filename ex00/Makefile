NAME		=	bureaucrats

SRCS		=	main.cpp\
				Bureaucrat.cpp

HEADERS		=	Bureaucrat.hpp

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

CXX			=	c++

OBJS		=	${SRCS:.cpp=.o}

.PHONY		:	all clean fclean re

all			:	${NAME}

${NAME}		:	${OBJS}
				${CXX} ${CPPFLAGS} -o $@ $^

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all