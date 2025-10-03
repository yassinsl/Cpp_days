CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

GREEN = \033[0;32m
RESET = \033[0m

NAME = Harl

SRC = 	Harl.cpp \
	main.cpp  \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
