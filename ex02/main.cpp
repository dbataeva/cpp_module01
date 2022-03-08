#include <iostream>

int	main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "string: " << str << std::endl;
	std::cout << "ptr: " << *stringPTR << std::endl;
	std::cout << "ref: " << stringREF << std::endl;

	std::cout << "ref address: " << &stringREF << std::endl;
	stringREF = "HI THIS ISN'T BRAIN";
	std::cout << "---str after change ref---\n" << str << std::endl;

	std::cout << "ptr address: " << stringPTR << std::endl;
	*stringPTR = "HI THIS IS BRAIN AGAIN";
	std::cout << "---str after change ptr---\n" << str << std::endl;
	return (0);
}