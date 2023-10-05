FLAGS = -Wall -Wextra -Werror
CFILES = $(shell find . -name "*.c")
OBJS = ${CFILES:.c=.o}
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}

%.o: %.c
	cc ${FLAGS} -c $< -o $@ -Iincludes

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}
re: clean fclean ${NAME}
