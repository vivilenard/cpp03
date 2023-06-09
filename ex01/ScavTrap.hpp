#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & copy);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();
};

# endif