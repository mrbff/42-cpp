NAME := PmergeMe

CFLAGS := -Wall -Wextra -Werror -g -std=c++98

CC := c++

SRCS := main.cpp PmergeMe.cpp

OBJS :=  $(SRCS:.cpp=.o)

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

RM :=	rm -f

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
