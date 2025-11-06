NAME = Fixed
CC = c++ -std=c++98 -Wall -Werror -Wextra

SRC = Fixed.cpp Point.cpp bsp.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp Fixed.hpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re