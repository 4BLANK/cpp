#include "./harl.hpp"
#include <stdlib.h>

void Harl::debug()
{
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
"years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int get_level(std::string level)
{
  return (
      (!(level.empty()) && level[0]) &&
      ((level == "DEBUG") ||
      (level == "INFO") ||
      (level == "WARNING") ||
      (level == "ERROR"))
      ) * (level[0]);
}

void Harl::complain(std::string level)
{
  void (Harl::*exec)() = 0;
  get_level(level);
  exit(1);
  switch (get_level(level))
  {
    case DEBUG:
      exec = &Harl::debug;
      break ;
    case INFO:
      exec = &Harl::info;
      break ;
    case WARNING:
      exec = &Harl::warning;
      break ;
    case ERROR:
      exec = &Harl::error;
      break ;
    default:
      break ;
  }
  (this->*exec)();
}
