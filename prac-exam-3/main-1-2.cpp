/*
Design a class called AssetPortfolio.
An AssetPortfolio contains assets has a maximum number of Assets and a list of Assets that currently belong to the portfolio.
Asset objects can be added to the portfolio as long as the portfolio is not full.

Your AssetPortfolio class must provide the following public methods:

    // default constructor capacity of zero assets
    AssetPortfolio();
    // constructor for a portfolio of given size
    AssetPortfolio(int size);

    // returns the number of assets which are in the portfolio
    int get_num_assets();

    // returns true if any asset in the portfolio is of the specified product type
    // otherwise returns false
    bool has_asset(std::string product);

    // returns the array of assets of the portfolio
    Asset *get_assets();

    // returns true and adds new asset to the portfolio if the portfolio is not full
    // otherwise returns false
    bool add_asset(Asset new_asset);

    // destructor
    ~AssetPortfolio();

You may add any other methods and any state variables you want, but the methods listed above must be available and public.
The default AssetPortfolio size is 0.

Write AssetPortfolio.h and AssetPortfolio.cpp files to declare and implement the AssetPortfolio class.

Write a main-1-2.cpp file that tests all of your methods (behaviours) function correctly.

Please submit all 3 files.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>

#include "AssetPortfolio.h"
#include "Asset.h"

// Variables
bool success;

// MAIN!
int main(void)
{
    cout << "\nAsset Portfolio with default constructor" << endl;
    AssetPortfolio portfolio_0 = AssetPortfolio();
    cout << "Running getters" << endl;
    cout << "\tHas current size: " << portfolio_0.get_num_assets() << endl;
    cout << "\tHas pointer to assets: " << portfolio_0.get_assets() << endl;
    cout << "Creating assets to add" << endl;
    Asset asset_0 = Asset(10, "apples");
    cout << "Attempting to add an asset (10, 'apples'): ";
    success = portfolio_0.add_asset(asset_0);
    if (success)
        cout << "Worked";
    else
        cout << "Failed";
    cout << endl;
    cout << "Checking if asset 'apples' is contained: ";
    success = portfolio_0.has_asset("apples");
    if (success)
        cout << "Found";
    else
        cout << "Not found";
    cout << endl;
    cout << "Running getters" << endl;
    cout << "\tHas current size: " << portfolio_0.get_num_assets() << endl;
    cout << "\tHas pointer to assets: " << portfolio_0.get_assets() << endl;

    cout << "\nAsset Portfolio with constructor parameters" << endl;
    cout << "\tsize = 3" << endl;
    AssetPortfolio portfolio_1 = AssetPortfolio(3);
    cout << "Running getters" << endl;
    cout << "\tHas size: " << portfolio_1.get_num_assets() << endl;
    cout << "\tHas pointer to assets: " << portfolio_1.get_assets() << endl;
    cout << "Creating assets to add" << endl;
    Asset asset_1 = Asset(10, "apples");
    Asset asset_2 = Asset(17, "pears");
    Asset asset_3 = Asset(37, "oranges");
    Asset asset_4 = Asset(2, "pinapples");
    vector<Asset> asset_vector;
    asset_vector.push_back(asset_1);
    asset_vector.push_back(asset_2);
    asset_vector.push_back(asset_3);
    asset_vector.push_back(asset_4);
    cout << "Attempting to add assets:" << endl;
    for (Asset asset : asset_vector)
    {
        cout << "\tAsset (" << asset.get_value() << ", '" << asset.get_product_type() << "'): ";
        success = portfolio_1.add_asset(asset);
        if (success)
            cout << "Worked";
        else
            cout << "Failed";
        cout << endl;
    }
    cout << "Checking if asset 'apples' is contained: ";
    success = portfolio_1.has_asset("apples");
    if (success)
        cout << "Found";
    else
        cout << "Not found";
    cout << endl;
    cout << "Checking if asset 'grapes' is contained: ";
    success = portfolio_1.has_asset("grapes");
    if (success)
        cout << "Found";
    else
        cout << "Not found";
    cout << endl;
    cout << "Running getters" << endl;
    cout << "\tHas current size: " << portfolio_1.get_num_assets() << endl;
    cout << "\tHas pointer to assets: " << portfolio_1.get_assets() << endl;


    return 0;
}