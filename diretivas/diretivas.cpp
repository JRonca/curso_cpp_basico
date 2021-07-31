#include <iostream>
#include "lib.h"
#ifndef NUMERO_H
#define NUMERO_H 89
void funcao(){
	std::cout << "Outra coisa..." << "\n";
}
#endif

using namespace std;

int main( int argc, char **argv  ){
	std::cout << "O valor de NUMERO_H é " << NUMERO_H << "\n";
	funcao();
	return 0;
}
