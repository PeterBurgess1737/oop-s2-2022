default:
	g++ animal.cpp hunter.cpp vegie.cpp zoo.cpp sort_by_animalID.cpp sort_by_name.cpp main.cpp -o main -Wall

run:
	g++ animal.cpp hunter.cpp vegie.cpp zoo.cpp sort_by_animalID.cpp sort_by_name.cpp main.cpp -o main -Wall
	./main