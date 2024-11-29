#Compiler.

CPP:= c++

#Compiler flags.

CPP_FLAGS:= -Wall -Wextra -Werror -g -std=c++98

#Source files.
SRC:= main.cpp Span.cpp

#Object files.
OBJ:= $(SRC:.cpp=.o)

#Name of the executable.
NAME:= span_class

#Rule to make the executable.
all: $(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re