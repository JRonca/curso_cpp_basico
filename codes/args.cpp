#include <iostream>

int main( int argc, char **argv  ){
	std::cout << "a quantidade de parametros e: " << argc << "\n";
	std::cout << "o nome do programa e: " << argv[0] << "\n";
	if(argc>1){
		std::cout << "O primeiro parametro e: " << argv[1] << "\n";
	}else{
		std::cout << "Nenhum parametro foi passado." << "\n";
	}
	return 0;
}
