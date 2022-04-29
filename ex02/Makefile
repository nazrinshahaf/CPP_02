NAME = Fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = Fixed.cpp\

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

test: re
	$(re) ./$(NAME)

.PHONY:	all clean fclean re test
