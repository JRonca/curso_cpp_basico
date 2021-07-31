#include <iostream>

using namespace std;

int main( int argc, char **argv  ){
	int var {};
	cout << "Digite um valor para var: ";
	cin >> var;	
	//condicoes normais if / else if / else
	if(var==5){
		cout << "o valor de var e CINCO" << endl;
	}else if(var == 10){
		cout << "o valor de var e DEZ" << endl;
	}else{
		cout << "o valor de var nao e 5 nem 10, ele e: " << var << endl;
	}
	// switch case
	switch(var){
		case 5:
			cout << "o valor da variavel e 5 CASE\n";
			break;
		case 10:
			cout << "o valor da variavel e 10 CASE\n";
			break;
		default:
			cout << "o valor da variavel e qualquer outra coisa\n";
			break;
	}
	//operador ternario
	cout << "digite um valor para var: ";
	cin >> var;
	var >= 18 ? cout << "pode dirigir\n" : cout << "nao pode dirigir\n";
	cout << (var>=18 ? "pode beber" : "nao pode beber") << endl;
	// switch case com range
	cout << "digite sua idade: ";
	cin >> var;
	switch(var){
		case 0 ... 12:
			cout << "crianca\n";
			break;
		case 13 ... 18:
			cout << "adolescente\n";
			break;
		case 19 ... 60:
			cout << "adulto\n";
			break;
		case 61 ... 200:
			cout << "idoso\n";
			break;
		default:
			cout << "essa idade nao existe\n";
			break;
	}
	return 0;
}
