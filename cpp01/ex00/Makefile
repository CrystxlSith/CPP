SRCS = Zombie.cpp randomChump.cpp main.cpp newZombie.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP
OBJS = ${SRCS:.cpp=.o}
DEPS = ${SRCS:.cpp=.d}
EXEC = zombie
RM = rm -rf

RED    = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
MAGENTA= \033[35m
CYAN   = \033[36m
RESET  = \033[0m

.SILENT:

all: ${EXEC}

${EXEC}: $(OBJS)
	echo "${CYAN}Compiling $<...${RESET}"
	${CC} ${FLAGS} ${OBJS} -o ${EXEC}
	echo "${GREEN}Success!!!${RESET}"

-include ${DEPS}
%.o: %.cpp
	echo "${YELLOW}Compiling $<...${RESET}"
	${CC} ${FLAGS} -c $< -o $@

clean:
	echo "${RED}Cleaning Zombie...${RESET}"
	${RM} ${OBJS} ${DEPS}
	echo "${GREEN}Success!!!${RESET}"

fclean: clean
	echo "${RED}Cleaning Zombie...${RESET}"
	${RM} ${EXEC}
	echo "${GREEN}Succes!!!${RESET}"

re: fclean all