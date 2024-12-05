#Compiler.
CPP:= c++

#CPP Flags
CPP_FLAGS:= -Wall -Wextra -Werror -std=c++98

#Sources files.

SRC:= main.cpp

#OBJECTS.

OBJ:= $(SRC:.cpp=.o)

#NAME
NAME:= mutant

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPP_FLAGS) -o  $(NAME) $(OBJ)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: clean fclean re all
