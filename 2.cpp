#include <iostream>

int main(void)
{
	std::string name;

	std::cout << "What's your name? ";
	std::cin >> name;
	std::cout << std::endl << "Hello, " << name << std::endl;

	return 0;
}
