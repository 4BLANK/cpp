#include "./Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
  Zombie zb("nigga");
  Zombie *z = newZombie("aymen");
  z->announce();
  delete(z);
  randomChump("Adawia");
}
