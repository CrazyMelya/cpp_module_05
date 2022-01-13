NAME		=	bureaucrats

SRCS		=	main.cpp\
				Bureaucrat.cpp\
				Form.cpp\
				PresidentialPardonForm.cpp\
				RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp

HEADERS		=	Bureaucrat.hpp\
				Form.hpp\
				PresidentialPardonForm.hpp\
				RobotomyRequestForm.hpp\
				ShrubberyCreationForm.hpp

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