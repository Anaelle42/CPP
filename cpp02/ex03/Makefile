NAME = bsp

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = srcs
FILES = Fixed.cpp \
		Point.cpp \
		bsp.cpp \
		main.cpp
		
SRC = $(addprefix $(SRC_DIR)/, $(FILES))

OBJ_DIR = objs
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp includes/Fixed.hpp includes/Point.hpp
	@mkdir -p ${dir $@}
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
