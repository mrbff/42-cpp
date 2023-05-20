NAME := test

CFLAGS := -Wall -Wextra -Werror -g -std=c++98

CC := c++

SRCS := main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS :=  $(SRCS:.cpp=.o)

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

RM :=	rm -f

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) *_shrubbery

re: fclean all

.PHONY: all clean fclean re
