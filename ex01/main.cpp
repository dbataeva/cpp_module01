#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void){
	int i = 1;
	Zombie *horde = zombieHorde(i, "Dasha");
	for (int j = 0; j < i; j++){
		horde[j].announce();
	}
	delete [] horde;

	int n = 5;
	Zombie *hord = zombieHorde(n, "Vitalii");
	for (int j = 0; j < n; j++){
		hord[j].announce();
	}
	delete [] hord;

	return (0);
}