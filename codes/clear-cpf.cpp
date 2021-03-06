#include <iostream>
#include <algorithm>
#include <vector>

int main( int argc, char **argv  ){
	if(argc > 1){
		for(int i=1; i<argc; i++){
			std::string cpf {argv[i]};
			cpf.erase( std::remove( cpf.begin(), cpf.end(), '.' ), cpf.end() );
			cpf.erase( std::remove( cpf.begin(), cpf.end(), '-' ), cpf.end() );

			std::cout << "O cpf formatado e: " << cpf << "\n";
		}
	}else{
		std::cout << "Nenhum parametro foi passado!" << "\n";
	}
	return 0;
}
