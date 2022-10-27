#include <iostream>
using std::cout;
using std::endl;

#include "Ford.h"

int main(void)
{
    cout << "\n========== Program Start ==========\n"
         << endl;

    cout << "Creating Ford Object default constructor" << endl;
    Ford my_ford_1;
    cout << endl;

    cout << "Creating Ford Object badgeNumber 17 and price 1001" << endl;
    Ford my_ford_2(17, 1001);
    cout << endl;

    cout << "Driving 151km" << endl;
    my_ford_2.drive(151);
    cout << "\t"
         << "Current fuel: " << my_ford_2.get_litresOfFuel()
         << endl;
    cout << endl;

    cout << "\n=========== Program End ===========\n"
         << endl;

    return 0;
}