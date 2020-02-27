#include  "menu.h"

int main(int argc, char **argv){
	initscr();
    noecho();
    cbreak();
	curs_set(FALSE);
    Menu newmen;
    newmen.start_menu();
    getch();
    endwin();
     
    return 0;
     
     
}
