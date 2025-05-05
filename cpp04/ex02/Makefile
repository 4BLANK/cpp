CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILE= ./Animal.cpp\
			 ./Cat.cpp\
			 ./WrongAnimal.cpp\
			 ./WrongCat.cpp\
			 ./Dog.cpp\
			 ./Brain.cpp\
			 main.cpp
OFILE= $(CFILE:.cpp=.o)
NAME= animals

all: $(NAME)

$(NAME): $(OFILE)
	$(CXX) $(OFILE) $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OFILE)

fclean: clean
	rm -rf $(NAME)

re: fclean all
