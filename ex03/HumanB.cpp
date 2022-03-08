#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->type = NULL;
	return ;
}

void	HumanB::setWeapon(Weapon &weaponType){
	this->type = &weaponType;
	return ;
}

void	HumanB::attack(void){
	std::cout << this->name << " attacks with his " << this->type->getType() << std::endl;
	return ;
}

HumanB::~HumanB(){}
