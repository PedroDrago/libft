FLAGS = -Wall -Wextra -Werror -c
CFILES = $(shell find . -name "*.c")
EXCLUDE = $(subst ./tests.c,,${CFILES}) #remove tests.c from list of what must be compiled
OBJS = ${EXCLUDE:.c=.o} 
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}
${OBJS}: ${EXCLUDE}
	cc ${FLAGS} $< -o $@
clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: clean fclean ${NAME}
