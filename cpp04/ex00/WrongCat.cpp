#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
  _type = "WrongCat";
  std::cout << _type << " created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
  : WrongAnimal()
{
  _type = copy._type;
  std::cout << _type << " created";
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
  _type = copy._type;
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << _type << " destroyed" << std::endl;
}

void WrongCat::makeSound()
  const
{
  std::cout << _type << " MEOWED!" << std::endl;
}

