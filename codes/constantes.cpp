#include <iostream>

#define HELLO "HELLO, WORLD!" //não é recomendado

using namespace std;

int main( int argc, char **argv  ){
	const string hello = "hello, world!";
	// sem código de escape
	cout << "Constant Macro HELLO: " << HELLO << endl;
	cout << "Constant literal hello: " << hello << endl;
	// com código de escape \n
        cout << "Constant Macro HELLO com \\n:\n " << HELLO << endl;
        cout << "Constant literal hello com \\n:\n " << hello << endl;
	// com código de escape \r
        cout << "Constant Macro HELLO com \\r:\r " << HELLO << endl;
        cout << "Constant literal hello com \\r:\r " << hello << endl;
	// com código de escape \t
        cout << "Constant Macro HELLO com \\t:\t " << HELLO << endl;
        cout << "Constant literal hello com \\t:\t " << hello << endl;
	// com código de escape \v
        cout << "Constant Macro HELLO com \\v:\v " << HELLO << endl;
        cout << "Constant literal hello com \\v:\v " << hello << endl;
	// com código de escape \b
        cout << "Constant Macro HELLO com \\b:\b " << HELLO << endl;
        cout << "Constant literal hello com \\b:\b " << hello << endl;
	// com código de escape \f
        cout << "Constant Macro HELLO com \\f:\f " << HELLO << endl;
        cout << "Constant literal hello com \\f:\f " << hello << endl;
	// com código de escape \a
        cout << "Constant Macro HELLO com \\a:\a " << HELLO << endl;
        cout << "Constant literal hello com \\a:\a " << hello << endl;
	// escrevendo ' " \ e ?
        cout << "\' \" \\ e \?" << endl;
	
	return 0;
}
