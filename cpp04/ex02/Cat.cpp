#include "./Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat created" << std::endl;
  _type = "Cat";
  _brain = new Brain();
}

Cat::Cat(const Cat& copy)
  : Animal()
{
  _type = copy._type;
  _brain = new Brain();
  *_brain = *(copy._brain);
  std::cout << _type << " created";
}

Cat& Cat::operator=(const Cat& copy)
{
  _type = copy._type;
  *_brain = *(copy._brain);
  return *this;
}

Cat::~Cat()
{
  delete _brain;
  std::cout << _type << " destroyed" << std::endl;
}

void Cat::makeSound()
  const
{
  std::cout << _type << " MEOWED!" << std::endl;
}
