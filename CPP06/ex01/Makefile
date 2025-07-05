CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRCS = main.cpp Serializer.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Serializer.hpp
NAME = serializer

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
