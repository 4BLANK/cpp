CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILE= ./Fixed.cpp\
			 main.cpp
OFILE= $(CFILE:.cpp=.o)
MEGA= fixed

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
