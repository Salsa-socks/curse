all: hello

hello: main.cpp
	g++ -lncurses menu.h menu.cpp main.cpp -o hello
	
clean:
	-rm menu.h.gch main.cpp.gch hello makefile~
