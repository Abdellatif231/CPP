CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = main.cpp Contact.cpp PhoneBook.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = phonebook

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Contact.hpp PhoneBook.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
