#include "Zombie.hpp"

Zombie*	newZombie(std::string name){
	Zombie *newborn = new Zombie(name);
	return (newborn);
}
