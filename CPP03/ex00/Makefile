XX = c++
CPPFLAGS = -Wall -Wextra -Werror
CPPFILES = main.cpp ClapTrap.cpp 
OFILES = $(CPPFILES:.cpp=.o)
NAME = clap

all: $(NAME)

$(NAME): $(OFILES)
	$(XX) $(CPPFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(XX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

