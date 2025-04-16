XX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILES = main.cpp ClapTrap.cpp ScavTrap.cpp 
OFILES = $(CPPFILES:.cpp=.o)
NAME = scav

all: $(NAME)

$(NAME): $(OFILES)
	$(XX) $(CPPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp ClapTrap.hpp SacvTrap.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

