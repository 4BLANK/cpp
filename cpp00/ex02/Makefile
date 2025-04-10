CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILES= ./tests.cpp \
	./Account.cpp 
OFILES= $(CFILES:.cpp=.o)
NAME= test

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(OFILES) $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
