/*
Write code to capture the scenario:
    At the checkout, the customer who is first in the queue pays an amount equal to the value of his/her products and then leaves the supermarket.
    The next customer in the queue is then served.
    For each customer in the queue (you have initialised the queue with 10 customers), print out how much they have to pay.

My implementation:
    Each customer has an array of integers representing the cost of each item (the items are ambigious)
    These are stored in a variable length 2D array
    This array is then passed to the function

If someone actually reads this and realises the folly of me implementing my own random numbers.
    I was just having a little fun.
Please tell me.
*/

// Libraries
#include <iostream>
#include <stdlib.h>

// External functions
extern void print_prices(int **customer_item_values, int *customer_item_amounts, int num_customers);

// Variables
int **customer_item_values; // Where the value of each customer item is stored
int *customer_item_amounts; // Where the amount of items each customer has is stored
int num_customers = 10;     // IDK
// The following is so I can have psudo random numbers, I know there is a random function c++ has, but I didn't want to seed it so this instead
// I understand this is very redundent and that I can use the rand() function, but ehh
int random_numbers[] = {
    2, 4, 1, 8, 7, 9, 7, 6, 5, 8, 7, 3, 8, 4, 0, 9, 6, 8, 7, 2, 3, 6, 5, 1, 2, 7, 9, 0, 8, 4, 8, 7, 8, 7, 7, 6};
const int num_random_numbers = 36;
int current_random_number_index = 0;

// Functions
int get_random_number()
{
    int random_number = random_numbers[current_random_number_index];
    current_random_number_index++;
    current_random_number_index %= num_random_numbers;
    return random_number;
}
void set_random_seed(int seed)
{
    current_random_number_index = seed % num_random_numbers;
}

// MAIN
int main(void)
{
    std::cout << "========== Print Prices Testing ==========" << std::endl;

    std::cout << "\nTest 1" << std::endl;

    // Setting up the storage arrays
    customer_item_values = (int **)malloc(sizeof(int *) * num_customers);
    customer_item_amounts = (int *)malloc(sizeof(int) * num_customers);
    for (int i = 0; i < num_customers; i++)
    {
        customer_item_amounts[i] = get_random_number() + 1;
        customer_item_values[i] = (int *)malloc(sizeof(int) * customer_item_amounts[i]);
        for (int j = 0; j < customer_item_amounts[i]; j++)
        {
            // Kind of unecessary to be complex but ehh, I wanted random numbers
            customer_item_values[i][j] = (get_random_number() + 1) * (int)((double)get_random_number() / 2. + 0.5);
        }
    }

    // Displaying the jagged array
    std::cout << "The prices of each customers items:" << std::endl;
    for (int i = 0; i < num_customers; i++)
    {
        std::cout << "\tCustomer " << i + 1 << ": ";
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

    // Using the function
    std::cout << "What the function produces:" << std::endl;
    print_prices(customer_item_values, customer_item_amounts, num_customers);

    // TEST 2 yay
    std::cout << "\nTest 2" << std::endl;

    set_random_seed(17);

    // Setting up the storage arrays
    customer_item_values = (int **)malloc(sizeof(int *) * num_customers);
    customer_item_amounts = (int *)malloc(sizeof(int) * num_customers);
    for (int i = 0; i < num_customers; i++)
    {
        customer_item_amounts[i] = get_random_number() + 1;
        customer_item_values[i] = (int *)malloc(sizeof(int) * customer_item_amounts[i]);
        for (int j = 0; j < customer_item_amounts[i]; j++)
        {
            // Kind of unecessary to be complex but ehh, I wanted random numbers
            customer_item_values[i][j] = (get_random_number() + 1) * (int)((double)get_random_number() * 2. / 3. + 1.5);
        }
    }

    // Displaying the jagged array
    std::cout << "The prices of each customers items:" << std::endl;
    for (int i = 0; i < num_customers; i++)
    {
        std::cout << "\tCustomer " << i + 1 << ": ";
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

    // Using the function
    std::cout << "What the function produces:" << std::endl;
    print_prices(customer_item_values, customer_item_amounts, num_customers);

    // Post me, I have looked at the results of the function, with a calculator in hand, and the function output seems to match what is expected

    return 0;
}