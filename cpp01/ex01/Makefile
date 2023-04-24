NAME = zombieHorde

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

CC = c++

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
