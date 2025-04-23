#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
  private:
    int _fixed_point;
    static const int _frac_bits = 8;
  public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=(const Fixed& copy);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    bool operator>(const Fixed& right) const;
    bool operator<(const Fixed& right) const;
    bool operator>=(const Fixed& right) const;
    bool operator<=(const Fixed& right) const;
    bool operator==(const Fixed& right) const;
    bool operator!=(const Fixed& right) const;
    Fixed operator+(const Fixed& right) const;
    Fixed operator-(const Fixed& right) const;
    Fixed operator*(const Fixed& right) const;
    Fixed operator/(const Fixed& right) const;
    Fixed& operator++();
    Fixed operator++(int);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};
std::ostream& operator<<(std::ostream& os, const Fixed& n);

#endif
