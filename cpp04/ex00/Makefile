NAME := test

CFLAGS := -Wall -Wextra -Werror -g -std=c++98 -Wshadow

CC := c++

SRCS := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS :=  $(SRCS:.cpp=.o)

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

RM :=	rm -f

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
