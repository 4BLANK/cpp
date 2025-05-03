CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILE= ./ClapTrap.cpp\
			 ./ScavTrap.cpp\
			 main.cpp
OFILE= $(CFILE:.cpp=.o)
NAME= claptrap

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
