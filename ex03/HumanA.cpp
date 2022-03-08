#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponType) : type(weaponType), name(name){}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with his " << this->type.getType() << std::endl;
	return ;
}

HumanA::~HumanA(){}
