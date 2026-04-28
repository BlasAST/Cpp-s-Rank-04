NAME = megaphone
CPP = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = megaphone.cpp
OBJ_SRC = $(SRC:.cpp=.o)


all: $(NAME)


%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_SRC)
	$(CPP) $(CFLAGS) $(OBJ_SRC) -o $(NAME)

clean: 
	rm -rf $(OBJ_SRC)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 