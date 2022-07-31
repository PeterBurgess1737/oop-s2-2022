/*
Write code to capture the scenario:
    You have been serving customers for a while and your queue no longer has 10 customers in it.
    A new customer arrives at the checkout.

Implementation:
    Working off of 3-1
    Adding to the jagged array
*/

// Libraries
#include <iostream>
#include <stdlib.h>

// External functions, massive function
extern void add_customer(int *customer_items, int number_of_customer_items, int ***customer_item_values, int **customer_item_amounts, int *num_customers);

// Variables
int **customer_item_values; // Where the value of each customer item is stored
int *customer_item_amounts; // Where the amount of items each customer has is stored
int num_customers = 2;      // IDK

// MAIN, there arent a lot of tests here because, well, there isnt much I can think of to test
int main(void)
{
    std::cout << "========== Add Customer Testing ==========" << std::endl;

    // Adding in two people
    customer_item_values = (int **)malloc(sizeof(int *) * num_customers);
    customer_item_amounts = (int *)malloc(sizeof(int) * num_customers);

    customer_item_amounts[0] = 5;
    customer_item_values[0] = (int *)malloc(sizeof(int) * customer_item_amounts[0]);
    customer_item_values[0][0] = 3;
    customer_item_values[0][1] = 7;
    customer_item_values[0][2] = 9;
    customer_item_values[0][3] = 3;
    customer_item_values[0][4] = 1;

    customer_item_amounts[1] = 3;
    customer_item_values[1] = (int *)malloc(sizeof(int) * customer_item_amounts[1]);
    customer_item_values[1][0] = 1;
    customer_item_values[1][1] = 7;
    customer_item_values[1][2] = 3;

    std::cout << "\nTest 1 - adding in a person" << std::endl;
    std::cout << "\tJagged Array Before:" << std::endl;
    for (int i = 0; i < num_customers; i++)
    {
        std::cout << "\t\tCustomer " << i + 1 << ": ";
        for (int j = 0; j < customer_item_amounts[i]; j++)
        {
            std::cout << "$" << customer_item_values[i][j];
            if (j != customer_item_amounts[i] - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\tAdding in: [9, 9, 9, 9, 9]" << std::endl;
    int customer_items[] = {9, 9, 9, 9, 9};
    add_customer(
        customer_items, 5,                                            // Customer information
        &customer_item_values, &customer_item_amounts, &num_customers // Storage information
    );

    std::cout << "\tJagged Array After:" << std::endl;
    for (int i = 0; i < num_customers; i++)
    {
        std::cout << "\t\tCustomer " << i + 1 << ": ";
        for (int j = 0; j < customer_item_amounts[i]; j++)
        {
            std::cout << "$" << customer_item_values[i][j];
            if (j != customer_item_amounts[i] - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\nTest 2 - adding in a person with negative length, no change expected" << std::endl;
    std::cout << "\tJagged Array Before:" << std::endl;
    for (int i = 0; i < num_customers; i++)
    {
        std::cout << "\t\tCustomer " << i + 1 << ": ";
        for (int j = 0; j < customer_item_amounts[i]; j++)
        {
            std::cout << "$" << customer_item_values[i][j];
            if (j != customer_item_amounts[i] - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\tAdding in: []" << std::endl;
    add_customer(
        customer_items, -17,                                          // Customer information
        &customer_item_values, &customer_item_amounts, &num_customers // Storage information
    );

    std::cout << "\tJagged Array After:" << std::endl;
    for (int i = 0; i < num_customers; i++)
    {
        std::cout << "\t\tCustomer " << i + 1 << ": ";
        for (int j = 0; j < customer_item_amounts[i]; j++)
        {
            std::cout << "$" << customer_item_values[i][j];
            if (j != customer_item_amounts[i] - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}