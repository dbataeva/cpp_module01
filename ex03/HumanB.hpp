#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*type;

public:
	void	attack(void);
	void	setWeapon(Weapon &type);
	HumanB(std::string name);
	~HumanB();
};

#endif