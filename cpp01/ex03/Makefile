CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILES= ./main.cpp\
				./Weapon.cpp\
				./HumanB.cpp\
				./HumanA.cpp
OFILES= $(CFILES:.cpp=.o)
NAME= violence

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
