#include <ncurses.h>

int main( int argc, char **argv  ){
	
	initscr();//init screen

	printw("Hello, Ncurses!");//print window

	refresh();//atualiza a janela do terminal

	getch();//get char(capta dados digitados pelo user)

	endwin();//end window

	return 0;
}
//compilando:
//g++ hello-ncurses-1.cpp -lncurses -ltinfo
