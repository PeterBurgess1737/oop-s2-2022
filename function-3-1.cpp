/*
Write code to capture the scenario:
    At the checkout, the customer who is first in the queue pays an amount equal to the value of his/her products and then leaves the supermarket.
    The next customer in the queue is then served.
    For each customer in the queue (you have initialised the queue with 10 customers), print out how much they have to pay.
*/

#include <iostream>

void print_prices(int **customer_item_values, int *customer_item_amounts, int num_customers)
{
    // return 1 on successful completeion, and 0 when unsuccesful
    if (num_customers < 1)
    {
        return;
    }

    // Loop over each customer
    for (int customer_num = 0; customer_num < num_customers; customer_num++)
    {
        // Get their total price
        int total_expence = 0;
        for (int i = 0; i < customer_item_amounts[customer_num]; i++)
        {
            total_expence += customer_item_values[customer_num][i];
        }

        // Print it
        std::cout << "Customer number " << customer_num + 1 << " needs to pay $" << total_expence << std::endl;
    }
}