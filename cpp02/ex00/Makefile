SRCS = main.cpp Fixed.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = ${SRCS:.cpp=.o}
EXEC = fixed
RM = rm -rf

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
MAGENTA= \033[35m
CYAN   = \033[36m
RESET  = \033[0m

.SILENT:

all: harl

harl: $(OBJS)
	echo "${CYAN}Compiling Fixed...${RESET}"
	${CC} ${FLAGS} ${SRCS} -o ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"
clean:
	echo "${RED}Cleaning Fixed...${RESET}"
	${RM} ${OBJS}
	echo "${GREEN}Succes!!!${RESET}"
fclean:
	echo "${RED}Cleaning Fixed...${RESET}"
	${RM} ${OBJS}
	${RM} ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"

re: clean fclean all