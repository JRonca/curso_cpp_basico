#include <iostream>

using namespace std;

int main( int argc, char **argv  ){
	int w {0};
	while(w<=5){
		cout << w << endl;
		w++;
	}
	do{
		cout << w << endl;
		w++;

	}while(w<=5);
	for(int i {0}; i<=10; i++){
		cout << i << endl;
	}
	return 0;
}
