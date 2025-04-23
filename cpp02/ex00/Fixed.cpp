#include "./Fixed.hpp"

int Fixed::getRawBits() const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member function called" << std::endl;
  _fixed_point = raw;
}

Fixed::Fixed()
{
  _fixed_point = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
  : _fixed_point(copy._fixed_point)
{
  std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _fixed_point = copy.getRawBits();
  return (*this);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
