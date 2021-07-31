#include <iostream>

enum Cores {
	red,
	green=50,
	blue
};

enum Saidas {
	sucesso,
	erro_ao_abrir,
	erro_de_leitura,
	erro_de_permissao
};

int main( int argc, char **argv  ){
	Cores cores;
	Saidas s;
	std::cout << "O valor da cor red e: " << red << "\n";
	std::cout << "O valor da cor green e: " << green << "\n";
	std::cout << "O valor da cor blue e: " << blue << "\n";
	
	return sucesso;
}
