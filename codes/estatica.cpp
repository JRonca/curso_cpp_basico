#include <iostream>

void print_line();

int main( int argc, char **argv  ){
	print_line();
	print_line();
	print_line();
	return 0;
}

void print_line(){
	static int a {0};
	++a;
	std::cout << a << "\n";
}
