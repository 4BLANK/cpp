#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"
#include "./Brain.hpp"

int main()
{
  Animal *a = new Cat();
  Animal *b = new Dog();
  *a = *b;
}
