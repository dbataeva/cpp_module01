#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->setType(type);
	return ;
}

Weapon::~Weapon(){}

const std::string	&Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(const std::string type){
	this->type = type;
	return ;
}