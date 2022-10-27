#include <iostream>
using std::cout;
using std::endl;

#include "Tesla.h"

int main(void)
{
    cout << "\n========== Program Start ==========\n"
         << endl;

    cout << "Creating Tesla Object default constructor" << endl;
    Tesla my_tesla_1;
    cout << endl;

    cout << "Creating Tesla Object model 'h' and price 1001" << endl;
    Tesla my_tesla_2('h', 1001);
    cout << endl;

    cout << "\n=========== Program End ===========\n"
         << endl;

    return 0;
}