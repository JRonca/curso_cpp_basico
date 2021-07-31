#include <iostream>
#include <string>

std::string * funcao(std::string*);
const int funcao(const int, const int);
int main( int argc, char **argv  ){
	std::string nome {"Ronca"};
	std::cout << *funcao(&nome) << "\n";
	const int n1 {8};
	const int n2 {7};
	std::cout << funcao(n1,n2) << "\n";
	return 0;
}
std::string * funcao(std::string * nome1){
	return nome1;
}
const int funcao(const int x, const int y){
	return x+y;
}
