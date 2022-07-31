#include <stdlib.h>
#include <iostream>

void add_customer(int *customer_items, int number_of_customer_items, int ***customer_item_values, int **customer_item_amounts, int *num_customers)
{
    // int *customer_items:                 the array of the prices of each item the customer has
    // int number_of_customer_items:        the number of items in the customer_items array
    // int ***customer_item_values:         where all the current customer item values are stored
    // int **customer_item_amounts:         where all the customer item amounts are stored
    // int *num_customers:                  the current number of customers in the queue

    // Assumes all calloc and malloc function calls will not fail

    // If nothing to add
    if (number_of_customer_items < 1)
    {
        return;
    }

    // add space to customer_item_values
    //      add in customer_items
    int **_customer_item_values = (int **)realloc(*customer_item_values, sizeof(int *) * (*num_customers + 1)); // Add space for another customer
    _customer_item_values[*num_customers] = (int *)malloc(sizeof(int) * number_of_customer_items);              // Allocate space for all their items
    for (int i = 0; i < number_of_customer_items; i++)                                                          // Copy over all the items
    {
        _customer_item_values[*num_customers][i] = customer_items[i];
    }
    *customer_item_values = _customer_item_values; // Give back to user of function, I dont know why, but it just dies if I assign it directly, rather than indirectly like this

    // add space to customer_item_amounts
    //      add in number_of_customer_items
    int *_customer_item_amounts = (int *)realloc(*customer_item_amounts, sizeof(int) * (*num_customers + 1)); // Allocate space again
    _customer_item_amounts[*num_customers] = number_of_customer_items;                                        // Add in the amount of items the customer has
    *customer_item_amounts = _customer_item_amounts;                                                          // Give back to user of function

    // As a new customer was added
    *num_customers = *num_customers + 1;
}