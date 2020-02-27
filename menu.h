#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <cstring>
#include <string>
#include <array>

#ifndef MENU_H
#define MENU_H

class Menu{
	public:
		void start_menu();
		void diff_menu();
		void score_menu();
};

#endif
