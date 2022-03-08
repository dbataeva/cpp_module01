#include "Zombie.hpp"

void	Zombie::set_name(std::string name){
	this->name = name;
	return ;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " was destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void){
	std::cout << "Zombie " << this->name << " announces: BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(std::string name){
	this->name = name;
	return ;
}

Zombie::Zombie(void){}