#include "./Zombie.hpp"

void randomChump(std::string name)
{
  Zombie ran;
  ran.setName(name);
  ran.announce();
}
