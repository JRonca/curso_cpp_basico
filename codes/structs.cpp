#include <iostream>
#include <string>

typedef struct cliente {
	std::string nome;
	std::string sobrenome;
	int matricula;
} t_cliente;

void show_data(t_cliente c){
	std::cout << "\n\e[5m::::: Dados do cliente :::::" << "\e[m\n";
	std::cout << c.nome << " " << c.sobrenome << " - \e[33;1m" << c.matricula << "\e[m\n";
}

t_cliente get_data(){
	t_cliente c;
	std::cout << "Informe o nome do cliente: ";
	std::getline(std::cin, c.nome);
	
	std::cout << "Informe o sobrenome do cliente: ";
	std::getline(std::cin, c.sobrenome);
	
	std::cout << "Informe a matricula do cliente: ";
	std::cin >> c.matricula;

	return c;	
}

int main( int argc, char **argv  ){
	t_cliente dados_cliente;
	dados_cliente = get_data();
	show_data(dados_cliente);
	return 0;
}
