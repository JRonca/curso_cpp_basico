#include <iostream>
#include <string>
#include <vector>

int main( int argc, char **argv  ){
	std::vector<std::string> vet= {"Shell", "C++", "PHP", "Pyhton"};
	std::vector<std::string>::iterator inicio = vet.begin();
	std::cout << "O primeiro elemento de vet: " << *inicio << "\n";
	
	vet.push_back("Javascript");
	vet.pop_back();
	
	std::vector<std::string>::iterator ultimo = vet.end();
	std::cout << "O ultimo elemento do vet: " << *ultimo << "\n";
	
	std::cout << "O tamanho do meu vetor e: " << vet.size() << "\n";
	return 0;
}
