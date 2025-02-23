CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = main.cpp ClapTrap.cpp 
OFILES = $(CFILES:.cpp=.o)
NAME = clap

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

