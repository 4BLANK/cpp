#include "./Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog created" << std::endl;
  _type = "Dog";
}

Dog::Dog(const Dog& copy)
  : Animal()
{
  _type = copy._type;
  std::cout << _type << " created";
}

Dog& Dog::operator=(const Dog& copy)
{
  _type = copy._type;
  return *this;
}

Dog::~Dog()
{
  std::cout << _type << " destroyed" << std::endl;
}

void Dog::makeSound()
  const
{
  std::cout << _type << " BARKED" << std::endl;
}
