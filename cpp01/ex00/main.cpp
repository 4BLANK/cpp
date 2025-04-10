#include "./Zombie.hpp"

Zombie* newZombie(std::string name)
{
  Zombie* newZombie = new Zombie;
  newZombie->setName(name);
  return (newZombie);
}

void randomChump(std::string name)
{
  Zombie ran;
  ran.setName(name);
  ran.announce();
}

int main()
{
  Zombie *z = newZombie("aymen");
  z->announce();
  delete(z);
  randomChump("Adawia");
}
