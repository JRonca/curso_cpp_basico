#include <iostream>

using namespace std;

int main( int argc, char **argv  ){
	int numeros[]={1,2,3,4,5,6,7,8};
	int total = (sizeof(numeros)/sizeof(numeros[0]));
	for(int i{0}; i<total;i++){
		cout << numeros[i] << endl;
	}
	cout << "=========================" << endl;
	for(int j=0; j<10; j++){
		cout << "||" << j << "||";
		for(int k=0; k<10;k++){
			cout << k << "|";
		}
		cout << endl;
		for(int l=0; l<10; l++){
			cout << "==";
		}
		cout << "=====" << endl;
	}
	return 0;
}
