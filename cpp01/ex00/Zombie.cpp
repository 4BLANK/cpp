#include "./Zombie.hpp"

void Zombie::setName(std::string name)
{
  Zombie::name = name;
}

void Zombie::announce(void)
{
  std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
  std::cout << "zombie created\n";
}

Zombie::~Zombie()
{
  std::cout << Zombie::name << " destroyed\n";
}
