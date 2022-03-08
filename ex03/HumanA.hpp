#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&type;

public:
	void	attack(void);
	HumanA(std::string name, Weapon &weaponType);
	~HumanA();
};

#endif