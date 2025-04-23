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
  return (float)(_fixed_point / 256.0);
}

int Fixed::toInt() const
{
  return (_fixed_point >> 8);
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
  _fixed_point = n << 8;
}

Fixed::Fixed(const float n)
{
  std::cout << "Float constructor called" << std::endl;
  _fixed_point = (int)(n * 256.0f);
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

bool Fixed::operator>(const Fixed& right) const
{
  return (this->getRawBits() > right.getRawBits());
}

bool Fixed::operator<(const Fixed& right) const
{
  return (this->getRawBits() < right.getRawBits());
}

bool Fixed::operator>=(const Fixed& right) const
{
  return (this->getRawBits() >= right.getRawBits());
}

bool Fixed::operator<=(const Fixed& right) const
{
  return (this->getRawBits() <= right.getRawBits());
}

bool Fixed::operator==(const Fixed& right) const
{
  return (this->getRawBits() == right.getRawBits());
}

bool Fixed::operator!=(const Fixed& right) const
{
  return (this->getRawBits() != right.getRawBits());
}

Fixed Fixed::operator+(const Fixed& right) const
{
  return (Fixed(this->toFloat() + right.toFloat()));
}

Fixed Fixed::operator-(const Fixed& right) const
{
  return (Fixed(this->toFloat() - right.toFloat()));
}

Fixed Fixed::operator*(const Fixed& right) const
{
  return (Fixed(this->toFloat() * right.toFloat()));
}

Fixed Fixed::operator/(const Fixed& right) const
{
  return (Fixed(this->toFloat() / right.toFloat()));
}

Fixed& Fixed::operator++()
{
  this->_fixed_point++;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp = *this;
  this->_fixed_point++;
  return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
  if (a > b)
    return b;
  else
    return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
  if (a > b)
    return b;
  else
    return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
  if (a >= b)
    return a;
  else
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
  if (a >= b)
    return a;
  else
    return b;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
