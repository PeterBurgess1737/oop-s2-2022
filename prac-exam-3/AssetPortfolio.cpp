#include <string>

#include "AssetPortfolio.h"
#include "Asset.h"

// default constructor capacity of zero assets
AssetPortfolio::AssetPortfolio()
{
    max_num_assets = 0;
    current_num_assets = 0;
    asset_array = nullptr;
}
// constructor for a portfolio of given size
AssetPortfolio::AssetPortfolio(int size)
{
    max_num_assets = size;
    current_num_assets = 0;
    asset_array = new Asset[size];
}

// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets()
{
    return current_num_assets;
}

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool AssetPortfolio::has_asset(std::string product)
{
    for (int i = 0; i < current_num_assets; i++)
    {
        if (asset_array[i].get_product_type() == product)
        {
            return true;
        }
    }

    return false;
}

// returns the array of assets of the portfolio
Asset *AssetPortfolio::get_assets()
{
    return asset_array;
}

// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset)
{
    if (current_num_assets < max_num_assets)
    {
        asset_array[current_num_assets] = new_asset;
        current_num_assets++;
        return true;
    }

    return false;
}

// destructor
AssetPortfolio::~AssetPortfolio()
{
    delete[] asset_array;
}