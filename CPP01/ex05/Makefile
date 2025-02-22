CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = main.cpp Harl.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = exe

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

