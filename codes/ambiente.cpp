#include <iostream>
#include <cstdlib>
#include <string>

int main( int argc, char **argv  ){
	std::string home = getenv("HOME");

	std::cout << "o caminho da minha home e: " << home << "\n";
	std::cout << "listando arquivos: " << "\n";
	system("ls");
	return 0;
}
