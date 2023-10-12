FLAGS = -Wall -Wextra -Werror -c
CFILES = $(shell find . -name "*.c")
OBJS = ${CFILES:.c=.o} 

MANDATORY_CFILES = $(filter-out ft_lst%, $(CFILES))
MANDATORY_OBJS = ${MANDATORY_CFILES:.c=.o}

NAME = libft.a

all: ${NAME}

${NAME}: ${MANDATORY_OBJS}
	ar -rc ${NAME} ${MANDATORY_OBJS}

${MANDATORY_OBJS}: ${MANDATORY_CFILES}
	cc ${FLAGS} $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: clean fclean ${NAME}


bonus: ${OBJS}
	ar -rc ${NAME} ${MANDATORY_OBJS}

${OBJS}: ${CFILES}
	cc ${FLAGS} $< -o $@
