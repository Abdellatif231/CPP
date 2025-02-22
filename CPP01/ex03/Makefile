CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = exe

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Weapoen.hpp HumanA.hpp HumanA.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

