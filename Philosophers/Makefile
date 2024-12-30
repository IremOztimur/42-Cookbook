NAME = philo
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
SRCS =	./srcs/main.c \
		./srcs/error_and_data.c \
		./srcs/ring.c \
		./srcs/routine.c \
		./srcs/extra.c \
		./srcs/philo.c

all: ${NAME}

${NAME}: ${SRCS}
	@gcc -g ${CFLAGS} ${SRCS} -o ${NAME}

clean:

fclean: clean
	@rm -rf ${NAME}
	@rm -rf ${NAME}.dSYM

re: fclean all

.PHONY: clean re
