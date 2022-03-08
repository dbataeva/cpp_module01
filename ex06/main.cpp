#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen switches;

	switch (argc) {
		case 2:
			switches.complain(std::string(argv[1]));
			break;
		default:
			std::cout << "wrong numbers of argument" << std::endl;
	}
	return (0);
}