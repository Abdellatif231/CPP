CC = c++
CFLAGS = -Wall -Wextra -Werror
CFILES = megaphone.cpp
OFILES = $(CFILES:.cpp=.o)
NAME = megaphone

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
