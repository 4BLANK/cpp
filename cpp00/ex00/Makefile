CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILE= ./megaphone.cpp
OFILE= $(CFILE:.cpp=.o)
MEGA= megaphone

all: $(MEGA)

$(MEGA): $(OFILE)
	$(CXX) $(OFILE) $(FLAGS) -o $(MEGA)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OFILE)

fclean: clean
	rm -rf $(MEGA)

re: fclean all
