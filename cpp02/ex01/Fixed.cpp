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

float Fixed::toFloat() const
{
  return (float)_fixed_point / (float)(1 << _frac_bits);
}

int Fixed::toInt() const
{
  return (_fixed_point >> _frac_bits);
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

Fixed::Fixed(const int n)
{
  std::cout << "Int constructor called" << std::endl;
  _fixed_point = n << _frac_bits;
}

Fixed::Fixed(const float n)
{
  std::cout << "Float constructor called" << std::endl;
  _fixed_point = roundf(n * (1 << _frac_bits));
}

Fixed& Fixed::operator=(const Fixed& copy)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _fixed_point = copy.getRawBits();
  return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& n)
{
  os << n.toFloat();
  return os;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
