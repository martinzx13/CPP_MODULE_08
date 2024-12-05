#Compiler

CPP:= c++

#Flags
CPP_FLAGS:= -Wall -Wextra -Werror -std=c++98

#Name
NAME:= finder

#Sources
SRCS:= main.cpp

#Objects

OBJS:= $(SRCS:.cpp=.o)

#Header
HEADER:= easyfind.hpp

#Rules
all: $(NAME) $(HEADER)

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re