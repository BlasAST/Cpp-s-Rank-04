NAME=program
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Account.cpp \
	tests.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
%.o : %.c
	c++ $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

# .PHONY all clean fclean
