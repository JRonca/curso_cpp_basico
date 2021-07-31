#include <iostream>

void funcao();
int funcao(int);
int funcao(int, int);
void funcao(char);
std::string funcao(std::string,std::string);

int main( int argc, char **argv  ){
	funcao();
	std::cout << funcao(6) << "\n";
	std::cout << funcao(4,5) << "\n";
	funcao('J');
	std::cout << funcao("Jose", "Ronca") << "\n";
	return 0;
}
void funcao(){
	std::cout << "funcao do tipo void sem parametros" << "\n";
}
int funcao(int x){
	return x;
}
int funcao(int x, int y){
	return x+y;
}
void funcao(char c){
	std::cout << c << "\n";
}
std::string funcao(std::string nome1,std::string nome2){
	return nome1 + " " + nome2;
}
