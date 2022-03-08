#include "Karen.hpp"

Karen::Karen(void){
	this->commands[0] = "DEBUG";
	this->commands[1] = "INFO";
	this->commands[2] = "WARNING";
	this->commands[3] = "ERROR";
	return ;
}

Karen::~Karen(void){}

void Karen::complain(std::string level) {
	int i = 0;

	while ((this->commands[i] != level) && i < 4)
		i++;
	switch (i)
	{
		case 0:
			this->ptr = &Karen::debug;
			break ;
		case 1:
			this->ptr = &Karen::info;
			break ;
		case 2:
			this->ptr = &Karen::warning;
			break ;
		case 3:
			this->ptr = &Karen::error;
			break ;
		default:
			std::cout << "bad argument" << std::endl;
			return ;
	}
	(this->*ptr)();
	return ;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}