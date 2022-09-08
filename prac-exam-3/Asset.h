#ifndef ASSET_H
#define ASSET_H

#include <string>

class Asset
{
protected:
    std::string product_type;
    int value;

public:
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
};

#endif