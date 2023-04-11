NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME).cpp -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
