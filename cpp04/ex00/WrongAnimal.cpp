#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
  : _type("WrongAnimal")
{
  std::cout << _type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
  _type = copy._type;
  std::cout << _type << " created" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
  _type = copy._type;
  return *this;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "Animal destroyed" << std::endl;
}

void WrongAnimal::makeSound()
  const
{
  std::cout << _type << " made unrecognized sound!" << std::endl;
}

std::string WrongAnimal::getType()
  const
{
  return (_type);
}

void WrongAnimal::setType(std::string type)
{
  _type = type;
}
