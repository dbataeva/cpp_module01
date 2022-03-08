#include "Zombie.hpp"

#include <sstream>

Zombie* zombieHorde( int N, std::string name ){
	Zombie	*horde = new Zombie[N];
	if (!horde){
		std::cout << "No space left on device" << std::endl;
	}
	for (int i = 0; i < N; i++){
		std::string new_name = name;
		std::string index;
		std::ostringstream convert;
		convert << i;
		index = convert.str();
		new_name.insert(name.length(), index);
		horde[i].set_name(new_name);
	}
	return (horde);
}