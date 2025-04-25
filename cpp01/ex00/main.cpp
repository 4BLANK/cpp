#include "./Zombie.hpp"

int main()
{
  Zombie z("zombie1");
  Zombie *z2 = newZombie("zombie2");
  randomChump("zombie3");
  z.announce();
  z2->announce();
  delete z2;
}
