CC = c++

CFLAGS = -std=c++98 -g # -Wall -Wextra -Werror

INCLUDE = -Iinc

SRC = src/main.cpp src/Shovel.cpp src/Worker.cpp src/Position.cpp \
	src/Statistic.cpp src/Tool.cpp

DBUILD = build/

OBJ = $(addprefix $(DBUILD), $(SRC:%.cpp=%.o))

NAME = Practice

$(DBUILD)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(DBUILD)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
