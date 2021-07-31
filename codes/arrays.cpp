#include <iostream>

using namespace std;

void recebe_array(int arr[]);

int main( int argc, char **argv  ){
	//array unidimensional
	int numeros[] = {1, 2, 3, 4, 5};
	cout << "o valor do elemento 2 somado ao numero 8 e: " << numeros[1+1]+8 << endl;
	//array multidimensional
	int numerosxy[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout << "o valor do elemento [1][1] e: " << numerosxy[1][1] << endl;
	//funcao com array
	cout << "o valor do elemento 3 antes da funcao e: " << numeros[3] << endl;
	recebe_array(numeros);
	cout << "o valor do elemento 3 depois da funcao e: " << numeros[3] << endl;
	numeros[5]=20;
	cout << "o elemento 4 do array numeros e: " << numeros[4] << endl;
	cout << "o elemento 5 do array numeros e: " << numeros[5] << endl;
	cout << "o tamanho do array numeros e: " << sizeof(numeros)/sizeof(numeros[0]) << endl;
	return 0;
}

void recebe_array(int arr[]){
	arr[3]=8;
}
