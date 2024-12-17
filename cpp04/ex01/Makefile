NAME = settheWorldOnFire

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = srcs
FILES = Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		Brain.cpp \
		main.cpp

SRC = $(addprefix $(SRC_DIR)/, $(FILES))

OBJ_DIR = objs
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME) -g

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp  includes/Animal.hpp \
includes/Cat.hpp includes/Dog.hpp includes/WrongCat.hpp \
includes/WrongAnimal.hpp includes/Brain.hpp
	@mkdir -p ${dir $@}
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
