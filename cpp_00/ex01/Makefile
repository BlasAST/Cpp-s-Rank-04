NAME = phonebook

CC = c++
C_FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp \
	PhoneBook.cpp \
	Contact.cpp

OBJS_SRC = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS_SRC)
	$(CC) $(C_FLAGS) $(OBJS_SRC) -o $(NAME)

%.o: %.cpp
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_SRC)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re