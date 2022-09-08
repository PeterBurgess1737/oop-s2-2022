#include <string>

#include "Asset.h"

// a default constructor
Asset::Asset()
{
    product_type = "";
    value = 0;
}

// a constructor that takes the product type  and value
Asset::Asset(int value, std::string product_type)
{
    this->value = value;
    this->product_type = product_type;
}

// returns the financial asset type
std::string Asset::get_product_type()
{
    return product_type;
}
// returns the the value of asset
int Asset::get_value()
{
    return value;
}
// A default destructor
Asset::~Asset()
{
}