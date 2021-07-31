#include <iostream>
#include <vector>
#include <algorithm>

int main( int argc, char **argv  ){
	std::string cpf = "998.776.554-32";
	cpf.erase( std::remove( cpf.begin() , cpf.end() , '.' ) , cpf.end() );
	cpf.erase( std::remove( cpf.begin() , cpf.end() , '-' ) , cpf.end() );
	std::cout << cpf << "\n";
	return 0;
}
