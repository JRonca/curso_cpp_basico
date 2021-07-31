#include <ncurses.h>
#include <string>
#include <unistd.h>

int main( int argc, char **argv  ){

	std::string ola = "Ola, ncurses";
	char * hello = &ola[0];
	const int delay = 90000;

	if(argc >1){
		hello = argv[1];
	}

	int altura, largura, inicio_x,inicio_y;
	altura = inicio_x = inicio_y = 10;
	largura=40;

	initscr();

	WINDOW * window = newwin(altura, largura, inicio_x, inicio_y);
	refresh();

	box(window, 0, 0);
	wrefresh(window);

	noecho();
	curs_set(FALSE);

	refresh();

	getch();

	endwin();

	return 0;
}
