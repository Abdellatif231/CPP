CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = main.cpp zombieHorde.cpp Zombie.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = zombies

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

