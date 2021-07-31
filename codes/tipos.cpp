#include <iostream>

int main( int argc, char **argv  ){
	std::cout << "Tamanho de char: " << sizeof(char) << " byte" << "\n";
	std::cout << "Tamanho de int: " << sizeof(int) << " bytes" << "\n";
	std::cout << "Tamanho de short int: " << sizeof(short int) << " bytes" << "\n";
	std::cout << "Tamanho de long int: " << sizeof(long int) << " bytes" << "\n";
	std::cout << "Tamanho de signed long int: " << sizeof(signed long int) << " bytes" << "\n";
	std::cout << "Tamanho de unsigned long int: " << sizeof(unsigned long int) << " bytes" << "\n";
	std::cout << "Tamanho de float: " << sizeof(float) << " bytes" << "\n";
	std::cout << "Tamanho de double: " << sizeof(double) << " bytes" << "\n";
	std::cout << "Tamanho de wchar_t: " << sizeof(wchar_t) << " bytes" << "\n";


	return 0;
}
