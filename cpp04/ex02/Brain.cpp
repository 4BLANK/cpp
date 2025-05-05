#include "./Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& copy)
{
  for (int i = 0; i < 100; i++)
    _ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(const Brain& copy)
{
  for (int i = 0; i < 100; i++)
    _ideas[i] = copy._ideas[i];
  return *this;
}

Brain::~Brain()
{
  std::cout << "Brain destroyed!" << std::endl;
}
