#include "menu.h"

void Menu::start_menu(){
	int ymax, xmax;
	getmaxyx(stdscr, ymax, xmax);
		
	WINDOW * menuwin = newwin(5, 25, ymax-25, 75);
	box(menuwin, 0, 0);
	refresh();
	wrefresh(menuwin);
	keypad(menuwin, true);
	std::string choices[3] = {
		"       Play Game       ", 
		"          Help         ", 
		"          Exit         "
	};
	int choice;
	int highlight = 0;
    
	while (1){
		for(int i = 0; i < 3; i++){
		    if (i == highlight)
		        wattron(menuwin, A_REVERSE);
		    mvwprintw(menuwin, i + 1, 1, choices[i].c_str());
		    wattroff(menuwin, A_REVERSE);
		}
		choice = wgetch(menuwin);
		
		switch(choice){
		    case KEY_UP:
		        if (highlight <= 0){
		            highlight = 3;
		            break;
		        }
		        highlight--;
		        break;
		    case KEY_DOWN:
		        if (highlight >= 2){
		            highlight = 0;
		            break;
		        }
		        highlight++;
		        break;
		    default:
		        break;
		}
		if (choice == 10){
		    if (highlight == 0){
		        clear();
		        diff_menu();
		        break;
		    }
		    else if (highlight == 2){
		        clear();
		        move(0,0);
		        addstr("Thank You for playing, Press any key to exit");
		        break;
		    }
		    else if (highlight == 1){
				clear();
				move(0, 0);
				addstr("\n");
				addstr("| |  | |      | |\n");
				addstr("| |__| |  ___ | | _ __\n");
				addstr("|  __  | / _ \\| || __ \\\n");
				addstr("| |  | ||  __/| || |_) |\n");
				addstr("|_|  |_| \\___||_|| .__/\n");
				addstr("                 | |    \n");
				addstr("                 |_|    \n");
				addstr("\n");
				addstr("HOW TO PLAY\n\nRandom info about the game");
				int ch = getch();
				if (ch){
					clear();
					start_menu();
					break;
				}
			}
		}
	}
}

void Menu::diff_menu(){
	int ymax, xmax;
	getmaxyx(stdscr, ymax, xmax);
	WINDOW * menuwin = newwin(5, 25, ymax-25, 75);
	box(menuwin, 0, 0);
	refresh();
	std::string easy = "easy";
	std::string medi = "medium";
	std::string hard = "hard";
	wrefresh(menuwin);
	keypad(menuwin, true);
	std::string choices[3] = {
		"          EASY         ",
		"         MEDIUM        ",
		"          HARD         "
	};
	int choice;
	int highlight = 0;
    
	while (1){
		for(int i = 0; i < 3; i++){
		    if (i == highlight)
		        wattron(menuwin, A_REVERSE);
		    mvwprintw(menuwin, i + 1, 1, choices[i].c_str());
		    wattroff(menuwin, A_REVERSE);
		}
		choice = wgetch(menuwin);
		
		switch(choice){
		    case KEY_UP:
		        if (highlight <= 0){
		            highlight = 3;
		            break;
		        }
		        highlight--;
		        break;
		    case KEY_DOWN:
		        if (highlight >= 2){
		            highlight = 0;
		            break;
		        }
		        highlight++;
		        break;
		    default:
		        break;
		}
		if (choice == 10){
		    if (highlight == 0){
		        clear();
		        move(0, 0);
		        addstr(" Selection made");
				//start game here
		        break;
		    }
		    else if (highlight == 1){
		        clear();
		        move(0,0);
		        addstr(" Selection made");
				//start game here
		        break;
		    }
		    else if (highlight == 2){
				clear();
				move(0, 0);
				addstr(" Selection made");
				//start game here
				break;
			}
		}
	}
}
