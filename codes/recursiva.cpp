#include <iostream>
#include <cstdlib>
int fatorial (int);
int fibonacci(int);
int main( int argc, char **argv  ){
	int num;
	if(argc <= 1){
		std::cout << "necessita colocar argumento!" << "\n";
	}else{
		int num = atoi(argv[1]);
		std::cout << "a sequencia fibonacci ate a posicao " << num << " e:" << "\n";
		for(int i=0; i<num;i++){
			std::cout << fibonacci(i) << " ";
		}
		std::cout << "\n";
		return 0;
	}
}

int fatorial(int numero){
	return (numero<=1) ? 1 : numero*fatorial(numero-1);
}
int fibonacci(int numero){
	return (numero<=1) ? 1 : fibonacci(numero-1)+fibonacci(numero-2);
}
