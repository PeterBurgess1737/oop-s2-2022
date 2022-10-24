#include <iostream>
using std::string;

string month_lookup(int month)
{
    /*
    Takes an integer between 1-12 (inclusive) representing the month and returns a string with the name of that month.
    The function should return the string "invalid month" if the integer parameter is not in the range 1-12 inclusive.
    The returned string should contain no leading or trailing spaces or newline characters.
    */

    if (month < 1 || month > 12)
    {
        return "invalid month";
    }

    string month_array[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    return month_array[month - 1];
}