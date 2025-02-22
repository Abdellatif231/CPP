CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = main.cpp randomChump.cpp Zombie.cpp newZombie.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = zombie

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

