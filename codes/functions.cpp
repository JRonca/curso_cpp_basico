#include <iostream>

using namespace std;

//prototipos deixam o código mais eficiente
void my_function();

int soma(int a, int b);

char upper(char a);

int main( int argc, char **argv  ){
	my_function();
	cout << soma(7,3) << endl;
	cout << upper('b') << endl;
	return 0;
}

void my_function(){
	cout << "Hello, World!!!" << endl;
}

int soma(int a, int b){
	return a+b;
}
char upper(char a){
	return toupper(a);
}

