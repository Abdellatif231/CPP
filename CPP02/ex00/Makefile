CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = main.cpp Fixed.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = fixed

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

