#include "./Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog created" << std::endl;
  _type = "Dog";
  _brain = new Brain();
}

Dog::Dog(const Dog& copy)
  : Animal()
{
  std::cout << _type << " created";
  _type = copy._type;
  _brain = new Brain();
  *_brain = *(copy._brain);
}

Dog& Dog::operator=(const Dog& copy)
{
  _type = copy._type;
  *_brain = *(copy._brain);
  return *this;
}

Dog::~Dog()
{
  delete _brain;
  std::cout << _type << " destroyed" << std::endl;
}

void Dog::makeSound()
  const
{
  std::cout << _type << " BARKED" << std::endl;
}
