#include <iostream>
#include <fstream>
#include <string>

int main( int argc, char **argv  ){
	std::string linha;
	std::string param;
	bool numero {false};
	int i =1;
	
	if(argc > 1){
		param = argv[1];
		if(param == "--numero" || param == "-n"){
			numero = true;
		}
	}

	std::fstream arquivo("arquivos.txt");
	
	if(arquivo.is_open()){
		while(std::getline(arquivo, linha)){
			if(numero){
				std::cout << i << " \u2502 " << linha << "\n";
				i++;
			}else{
				std::cout << linha << "\n";
			}
		}
	}else{
		std::cout << "nao foi possivel abrir o arquivo" << "\n";
	}
	return 0;
}
