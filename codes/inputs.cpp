#include <iostream>

using namespace std;

int main( int argc, char **argv  ){
	char letra[99];
	cout << "Digite uma letra: ";
	cin.getline(letra,99);
	cout << "a letra que voce digitou foi: " << letra << endl;
	cout << "digite agora outra letra: ";
	cin >> letra;//estranho, isso não era pra dar certo, mas ok
	cout << "a letra agora foi: " << letra << endl;
	// sem limites com string
	string palavra;
	cout << "agora digite uma palavra: ";
	//getline(std::cin,palavra);// era pra isso dar certo, mas ok
	cin >> palavra;
	cout << "sua palavra foi: " << palavra << endl;
	return 0;
}
