#include <iostream>
#include <string>

int main( int argc, char **argv  ){
	std::string * ponteiro = nullptr;
	ponteiro = new std::string[8];
	std::cout << "Digite algo: ";
	std::getline(std::cin, (*ponteiro));
	std::cout << "Você digitou: \e[33;1m" << *ponteiro << "\e[m" << "\n";
	delete[] ponteiro;
	ponteiro = NULL;
	return 0;
}
