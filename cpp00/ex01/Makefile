CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
CFILES= ./Contact.cpp \
	./PhoneBook.cpp \
	./main.cpp
OFILES= $(CFILES:.cpp=.o)
NAME= phonebook

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(OFILES) $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

g:
	$(CXX) $(OFILES) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
