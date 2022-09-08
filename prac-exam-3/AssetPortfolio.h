#ifndef ASSETPORTFOLIO
#define ASSETPORTFOLIO

#include <string>

#include "Asset.h"

class AssetPortfolio
{
protected:
    int max_num_assets;
    int current_num_assets;
    Asset *asset_array;

public:
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
};

#endif