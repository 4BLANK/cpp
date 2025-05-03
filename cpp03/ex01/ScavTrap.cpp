#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
  : ClapTrap()
{
  _hit_points = 100;
  _energy_points = 50;
  _attack_damage = 20;
  _is_guarding = false;
  std::cout << "ScavTrap" << _name << "created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
  :ClapTrap(copy), _is_guarding(copy._is_guarding)
{
  std::cout << "ScavTrap" << _name << "created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name)
{
  _hit_points = 100;
  _energy_points = 50;
  _attack_damage = 20;
  _is_guarding = false;
  std::cout << "ScavTrap" << _name << "created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap assignation operator" << std::endl;
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	_is_guarding = copy._is_guarding;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
  if (_energy_points > 0 && _hit_points > 0)
  {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage" << std::endl;
    _energy_points--;
  }
  else 
    std::cout << "ScavTrap " << _name << " can't attack 💔" << std::endl;
}

void ScavTrap::guardGate(void)
{
  if (_is_guarding == false)
  {
    _is_guarding = true;
    std::cout << "ScavTrap " << _name << " is now gatekeeping!" << std::endl;
  }
    else
      std::cout << "ScavTrap " << _name << " was already gatekeeping!" << std::endl;
}
