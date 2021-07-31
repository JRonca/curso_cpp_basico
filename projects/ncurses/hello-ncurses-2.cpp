#include <ncurses.h>
#include <string>

int main( int argc, char **argv  ){
	
	std::string ola = "Ola, ncurses";
	char * hello = &ola[0];

	initscr();

	printw(hello);

	refresh();

	getch();

	endwin();

	return 0;
}
