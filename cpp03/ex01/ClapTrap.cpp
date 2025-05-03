#include "./ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap()
  : _name("unspecified"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
  std::cout << "ClapTrap unspecified created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
  :_name(copy._name),
  _hit_points(copy._hit_points),
  _energy_points(copy._energy_points),
  _attack_damage(copy._attack_damage)
{
  std::cout << copy._name << " copied into new object" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
  : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
  std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
{
  std::cout << "ClapTrap assignement operator" << std::endl;
  _name = copy._name;
  _hit_points = copy._hit_points;
  _energy_points = copy._energy_points;
  _attack_damage = copy._attack_damage;
  return *this;
}

void ClapTrap::attack(const std::string& target)
{
  if (_energy_points > 0 && _hit_points > 0)
  {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage" << std::endl;
    _energy_points--;
  }
  else 
    std::cout << "ClapTrap " << _name << " can't attack 💔" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (_hit_points > amount)
    _hit_points -= amount;
  else if (_hit_points > 0)
    _hit_points = 0;
  else
    std::cout << _name << " is dead!" << std::endl;
  std::cout << _name << " was attacked and lost " << amount << "hit points, only " << _hit_points << " is left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (_energy_points > 0 && _hit_points > 0 && _hit_points + amount <= 10)
  {
    _hit_points += amount;
    std::cout << _name << "was repaired" << std::endl;
    _energy_points--;
  }
  else
    std::cout << "ClapTrap " << _name << " can't repair itself 💔" << std::endl;
}
