SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = ${SRCS:.cpp=.o}
EXEC = Fragtrap
RM = rm -rf

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
MAGENTA= \033[35m
CYAN   = \033[36m
RESET  = \033[0m

.SILENT:

all: fragtrap

fragtrap: $(OBJS)
	echo "${CYAN}Compiling FragTrap...${RESET}"
	${CC} ${FLAGS} ${SRCS} -o ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"
clean:
	echo "${RED}Cleaning FragTrap...${RESET}"
	${RM} ${OBJS}
	echo "${GREEN}Succes!!!${RESET}"
fclean:
	echo "${RED}Cleaning FragTrap...${RESET}"
	${RM} ${OBJS}
	${RM} ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"

re: clean fclean all