#include "Karen.hpp"

int main(void)
{
	Karen switches;

	std::cout << "---debug testing---" << std::endl;
	switches.complain("DEBUG");
	std::cout << "\n---info testing---" << std::endl;
	switches.complain("INFO");
	std::cout << "\n---warning testing---" << std::endl;
	switches.complain("WARNING");
	std::cout << "\n---error testing---" << std::endl;
	switches.complain("ERROR");

	std::cout << "\n---wrong argument---" << std::endl;
	switches.complain("DEBUGE");
	return (0);
}