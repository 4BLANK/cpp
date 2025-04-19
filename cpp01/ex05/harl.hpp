#include <iostream>
#ifndef HARL_HPP
#define HARL_HPP

#define DEBUG 68
#define INFO 73
#define WARNING 87
#define ERROR 69

class Harl
{
  private:
    void debug();
    void info();
    void warning();
    void error();
  public:
    void complain(std::string level);
};
#endif
