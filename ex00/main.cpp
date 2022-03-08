#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main(void){
	Zombie first = Zombie("Dasha");
	Zombie *second = newZombie("Vitalii");
	randomChump("cat");
	
	first.announce();
	second->announce();
	delete second;
	return (0);
}