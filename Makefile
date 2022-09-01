1-1: main-1-1.cpp Capybara.cpp
	g++ Capybara.cpp main-1-1.cpp -o main -Wall

1-2: main-1-2.cpp Person.cpp
	g++ Person.cpp main-1-2.cpp -o main -Wall

2-1: main-2-1.cpp Wagon.cpp Capybara.cpp
	g++ Capybara.cpp Wagon.cpp main-2-1.cpp -o main -Wall

2-2: main-2-2.cpp Airplane.cpp Person.cpp
	g++ Person.cpp Airplane.cpp main-2-2.cpp -o main -Wall