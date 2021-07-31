#include "project.h"
#include <string>

void _help(){
	std::cout << "Use: ./a.out [--parameters] [number]\n"
	      	     "--dec2bin - To convert from decimal to binary\n"
		     "--bin2dec - To convert from binary to decimal\n";
}

void dec2bin(int number){
	int binary_arr[32], i = {0};

	while (number > 0){
		binary_arr[i] = number % 2;
		number = number/2;
		i++;
	}
	for(int k = i-1; k>=0;k--){
		std::cout << binary_arr[k];
	}
	std::cout << "\n";
}

int bin2dec(int number){
	int last={0}, dec_num={0}, base = {1};

	while(number){
		last=number % 10;
		number= number/10;
		dec_num+=last*base;
		base=base* 2;
	}
	return dec_num;

}

bool check_number(char * x){
	bool t= {true};

	for(size_t i=0; i< strlen(x); i++){
		if(isdigit(x[i]) == false){
			t= false;
		}
	}
	return t;
}

void _start(int argc, char ** argv){
	if( argc > 2 ){
		std::string param = argv[1];
		
		if(!check_number(argv[2])){
			_help();
			return;
		}	

		int number = std::stoi(argv[2]);

		if(param == "--dec2bin" || param == "-b"){
			dec2bin(number);	
		}else if( param == "--bin2dec" || param == "-d" ){
			std::cout << bin2dec(number) << "\n";
		}else{
			_help();
		}
	}else{
		_help();
	}
}

