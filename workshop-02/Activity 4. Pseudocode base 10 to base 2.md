# Activity 4. Pseudocode base 10 to base 2

Write the pseudocode to transform a number from base 10 to base 2.
- How are you storing the base 2 number?
- How would you extend this algorithm to make it usable for any transformation?


## Working
    Create int called decimal_number  # this is where the decimal number we are converting is stored
    Create empty string called binary_number  # this is where the binary number will be stored

    Copy decimal_number to new varible called decimal_copy  # the algorithm used is destructive, so this is to prevent that

    While decimal_copy is larger than 0 do
        If decimal_copy mod 2 is equal to 1
            Prepend binary_number with 1
        Else
            Prepend binary number with 0

        decimal_copy is assigned decimal_copy divided by 2 and truncated

    # When the loop exits, the varible binary_number now contains the string form of the binary number