XX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILES = main.cpp ClapTrap.cpp FragTrap.cpp 
OFILES = $(CPPFILES:.cpp=.o)
NAME = frag

all: $(NAME)

$(NAME): $(OFILES)
	$(XX) $(CPPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp
	$(XX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

