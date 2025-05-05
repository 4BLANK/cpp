#include "./Animal.hpp"

Animal::Animal()
  : _type("Animal")
{
  std::cout << _type << " created" << std::endl;
}

Animal::Animal(const Animal& copy)
{
  _type = copy._type;
  std::cout << _type << " created" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
  _type = copy._type;
  return *this;
}

Animal::~Animal()
{
  std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound()
  const
{
  std::cout << _type << " made unrecognized sound!" << std::endl;
}

std::string Animal::getType()
  const
{
  return (_type);
}

void Animal::setType(std::string type)
{
  _type = type;
}
