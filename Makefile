all: USBConnection.h main-1.cpp
	g++ USBConnection.h main-1.cpp -o main -Wall