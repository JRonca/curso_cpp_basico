#include <iostream>

int main( int argc, char **argv  ){
	
	int numero {369};
	int * pnumero {&numero};

	std::cout << "o valor de numero e: " << numero << "\n";
	std::cout << "o valor de pnumero e: " << pnumero << "\n";
	std::cout << "o valor de *pnumero e: " << *pnumero << "\n";

	return 0;
}
