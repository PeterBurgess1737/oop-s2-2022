#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;

    // Different test cases
    /* // commented out cause grade scope no likey
    std::cout << "========== Test Cases ==========" << std::endl;

    std::cout << "Test 1 - longer array" << std::endl;
    int test_array_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << "\tExpected number is: 5" << std::endl;
    std::cout << "\tThe number is:      " << count(test_array_1, 10) << std::endl;
    
    std::cout << "Test 2 - negative numbers" << std::endl;
    int test_array_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 17, 19, -22, 11, -1};
    std::cout << "\tExpected number is: 6" << std::endl;
    std::cout << "\tThe number is:      " << count(test_array_2, 15) << std::endl;
    
    std::cout << "Test 3 - all even numbers" << std::endl;
    int test_array_3[] = {0, 2, 8, -10, 22};
    std::cout << "\tExpected number is: 5" << std::endl;
    std::cout << "\tThe number is:      " << count(test_array_3, 5) << std::endl;
    
    std::cout << "Test 4 - all odd numbers" << std::endl;
    int test_array_4[] = {1, -3, 17};
    std::cout << "\tExpected number is: 0" << std::endl;
    std::cout << "\tThe number is:      " << count(test_array_4, 3) << std::endl;
    
    std::cout << "Test 5 - no numbers" << std::endl;
    // I know i say no numbers and there is clearly one number in the array
    // but the count function is passed an array length of 0 so it assumes the array has length of 0
    int test_array_5[1];
    std::cout << "\tExpected number is: 0" << std::endl;
    std::cout << "\tThe number is:      " << count(test_array_5, 0) << std::endl;
    */

    return 0;
}
