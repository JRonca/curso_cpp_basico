#include <iostream>

using namespace std;

int main(){
	int w = -13;
	int x = 17;
	int signed y = -3;
	int unsigned z = 5;
	cout << "Os valores de w,x,y,z sao: "
		<< w << "," << x << "," << y << ","  << z << ","  << endl;
	float pi = 3.14159265358979323846;
	double PI = 3.14159265358979323846;
	char j = 'J';// char sempre em aspas simples
	cout << j << "numero pi reduzido: " << pi << " numero pi mais preciso " << PI << endl;
	//tipos de inicialização:
	//Inicialização de cópia
	int a = 10;
	//inicialização direta (não tem muita diferença quando o tipo for int)
	int b (10);
	//inicialização uniforme (use sempre que possível)
	int c {10};
	// se fizer: int c = {10} da no mesmo
	cout << a << " - "<< b << " - " << c << endl;
	//string
	string palavra {"JRonca"};//string sempre em aspas duplas
	cout << palavra << endl;
	return 0;
}
