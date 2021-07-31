#include <iostream>
#include <typeinfo>

using namespace std;

int main( int argc, char **argv  ){
	//conversão implicita
	cout << "Conversao implicita: \n\n";
	double valor = 3.14;
	int numero = valor;
	char letra = 'c';
	int i = letra;	
	cout << "o valor de valor e: " << valor << endl;
	cout << "o valor de numero e: " <<numero << endl;
	cout << "o valor de letra e: " << letra << " with type " << typeid(letra).name() << endl;
	numero = letra;
	cout << "o valor de numero recebendo letra e: " << numero << endl;
	numero += letra;
	cout << "o valor de numero + letra e: " << numero << endl;
	//conversao explicita
	cout << "\n\nconversao explicita: \n\n";
	double d = 3.14;
	int integer = int(d);
	cout << "the value of d is: " << d << endl;
	cout << "the value of integer is: " << integer << endl;
	d = 6.28;
	integer = (int)d;
	cout << "the value of d is: " << d << endl;
	cout << "the value of integer is: " << integer << endl;
	//casts
	//static_cast, dynamic_cast, const_cast, reinterpret_cast
	//example os static_cast
	cout << "\n\nexamples of static_cast:\n\n";
	double dexample = 8.19;
	int iexample = static_cast<int>(dexample);
	cout << "the value of dexample is: " << dexample << " with type " << typeid(dexample).name() << endl;
	cout << "the value of iexample is: " << iexample << " with type " << typeid(iexample).name() << endl;
	dexample = static_cast<double>(iexample);
	cout << "the value of dexample is: " << dexample << " with type " << typeid(dexample).name() << endl;
	//example of const_cast
	cout << "\n\nexamples of const_cast:\n\n";
	double pi = 3.14;
	const int PI = const_cast<double&>(pi);
	cout << "the value of pi is: " << pi << endl;
	cout << "the value of PI is: " << PI << endl;

	return 0;
}
