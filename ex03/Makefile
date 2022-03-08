NAME	=	ex03

SRCS	=	HumanA.cpp HumanB.cpp main.cpp Weapon.cpp 

OBJS	=	$(SRCS:.cpp=.o)

CC		=	clang++ -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

%.o%.cpp:	HumanA.hpp HumanB.hpp Weapom.hpp
			$(CC) -c $< -o $@

all:		${NAME}

$(NAME):	${OBJS} 
			$(CC) $^ -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}
			
.PHONY:		all clean fclean re