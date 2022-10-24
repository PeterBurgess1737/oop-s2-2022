/*
Design a class called Asset.
Assets need to store state about the type of the financial asset and the value of the asset.

Asset must provide the following public behaviours (methods):

    // a default constructor
    Asset();

    // a constructor that takes the product type  and value
    Asset(int value, std::string product_type);

    // returns the financial asset type
    std::string get_product_type();
    // returns the the value of asset
    int get_value();
    // A default destructor
    ~Asset();

You may add any other methods and any state variables you want, but the methods listed above must be available and public.
The default constructor should set the type of asset to the empty string "" and  the value of the asset to zero.

Write Asset.h and Asset.cpp files to declare and implement the Asset class.

Write a main-1-1.cpp file that tests all of your methods (behaviours) function correctly.

Please submit all 3 files.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include "Asset.h"

// MAIN!
int main(void)
{
    cout << "\nAsset with default constructor" << endl;
    Asset asset_1 = Asset();
    cout << "Running getters" << endl;
    cout << "\tProduct type '" << asset_1.get_product_type() << "'" << endl;
    cout << "\tProduct value '" << asset_1.get_value() << "'" << endl;

    cout << "\nAsset with constuctor parameters" << endl;
    cout << "\tvalue = 10\n\tproduct_type='apples'" << endl;
    Asset asset_2 = Asset(10, "apples");
    cout << "Running getters" << endl;
    cout << "\tProduct type '" << asset_2.get_product_type() << "'" << endl;
    cout << "\tProduct value '" << asset_2.get_value() << "'" << endl;

    cout << "\nFinished" << endl;

    return 0;
}