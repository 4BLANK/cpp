#include "./Zombie.hpp"

int main()
{
  Zombie *zombies = zombieHorde(10, "aymn");
  for (int i = 0; zombies != NULL && i < 10 ; i++)
    (zombies[i]).announce();
  delete[] zombies;
}
