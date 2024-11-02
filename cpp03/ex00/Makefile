SRCS = main.cpp ClapTrap.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = ${SRCS:.cpp=.o}
EXEC = claptrap
RM = rm -rf

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
MAGENTA= \033[35m
CYAN   = \033[36m
RESET  = \033[0m

.SILENT:

all: claptrap

claptrap: $(OBJS)
	echo "${CYAN}Compiling ClapTrap...${RESET}"
	${CC} ${FLAGS} ${SRCS} -o ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"
clean:
	echo "${RED}Cleaning ClapTrap...${RESET}"
	${RM} ${OBJS}
	echo "${GREEN}Succes!!!${RESET}"
fclean:
	echo "${RED}Cleaning ClapTrap...${RESET}"
	${RM} ${OBJS}
	${RM} ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"

re: clean fclean all