#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " gets destructed" << std::endl;
}
ClapTrap::ClapTrap():_name("X"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " arises" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " arises" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	*this = copy;
	std::cout << "A copy of " << copy._name << " gets created";
}
// void ClapTrap::attack(const std::string& target)
// {

// }

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << this->_name << " is now " << rhs._name << std::endl;

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}