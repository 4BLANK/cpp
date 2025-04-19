#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);
void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
  Zombie *zombies = zombieHorde(10, "aymn");
  for (int i = 0; zombies != NULL && i < 10 ; i++)
    (zombies[i]).announce();
  delete[] zombies;
}
