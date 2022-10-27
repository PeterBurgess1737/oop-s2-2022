#include <iostream>
using std::cout;
using std::endl;

#include "Fleet.h"

int main(void)
{
    cout << "\n========== Program Start ==========\n"
         << endl;

    cout << "Creating Fleet Object authority 5" << endl;
    Fleet *my_fleet_1 = Fleet::createFleet(5);
    cout << "\t"
         << "Pointer to fleet: "
         << my_fleet_1
         << endl;
    cout << endl;

    cout << "Creating Fleet Object authority 10" << endl;
    Fleet *my_fleet_2 = Fleet::createFleet(10);
    cout << "\t"
         << "Pointer to fleet: "
         << my_fleet_2
         << endl;
    cout << endl;

    cout << "\n=========== Program End ===========\n"
         << endl;

    return 0;
}