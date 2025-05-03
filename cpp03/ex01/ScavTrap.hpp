#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "./ClapTrap.hpp"
class ScavTrap: public ClapTrap
{
  private:
    bool _is_guarding;
  public:
    ScavTrap();
    ScavTrap(const ScavTrap& copy);
    ScavTrap(std::string name);
    virtual ~ScavTrap();
    ScavTrap &operator=(const ScavTrap& copy);
    void attack(const std::string& target);
    void guardGate(void);
};

#endif
