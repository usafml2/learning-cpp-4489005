// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream> // include the input/output library

int a, b = 5; // single line comment. // Declaration of two integer variables

/* Multi
*  line
*  comment */

int main(){ // Main function - execution starts here
    bool my_flag; // Declaration of a boolean variable
    a = 7; // Assignment of value 7 to variable a
    my_flag = false; // Assignment of value false to variable my_flag
    std::cout << "a = " << a << std::endl; // Output the value of variable a
    std::cout << "b = " << b << std::endl; // Output the value of variable b
    std::cout << "flag = " << my_flag << std::endl; // Output the value of variable my_flag
    my_flag = true; // Assignment of value true to variable my_flag
    std::cout << "flag = " << my_flag << std::endl; // Output the value of variable my_flag
    std::cout << "a + b = " << a + b << std::endl; // Output the sum of a and b
    std::cout << "b - a = " << b - a << std::endl; // Output the difference of b and a
    unsigned int positive; // Declaration of an unsigned integer variable
    positive = b - a; //
    std::cout << "b - a (unsigned) = " << positive << std::endl; // Output the value of positive
    // Note: The value will be a large positive number due to underflow
    // (unsigned) is used to store only non-negative values
    std::cout << std::endl << std::endl; // Output two new lines
    return (0); // Indicate that the program ended successfully
}
