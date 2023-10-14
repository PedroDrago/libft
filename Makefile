FLAGS = -Wall -Wextra -Werror -c
NAME = libft.a 
SRC = $(wildcard *.c)
BONUS_OBJ = $(SRC:.c=.o)
OBJ = $(filter-out ft_lst%, $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	 ar -rc $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	 ar -rc $(NAME) $(BONUS_OBJ)

%.o: %.c
	cc $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
