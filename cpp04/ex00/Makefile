SRCS = main.cpp Animal.cpp Dog.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS = ${SRCS:.cpp=.o}
EXEC = bark
RM = rm -rf

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
MAGENTA= \033[35m
CYAN   = \033[36m
RESET  = \033[0m

.SILENT:

all: bark

bark: $(OBJS)
	echo "${CYAN}Compiling bark...${RESET}"
	${CC} ${FLAGS} ${SRCS} -o ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"
clean:
	echo "${RED}Cleaning bark...${RESET}"
	${RM} ${OBJS}
	echo "${GREEN}Succes!!!${RESET}"
fclean:
	echo "${RED}Cleaning bark...${RESET}"
	${RM} ${OBJS}
	${RM} ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"

re: clean fclean all