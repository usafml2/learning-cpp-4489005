// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> // include the input/output library
#include <string> // include the string library
#include <cstdint> // include the fixed-width integer types library

#define CAPACITY 5000 // define a constant named CAPACITY
#define DEBUG // define a constant named DEBUG to enable debug messages

int main(){ // main function, program execution starts
    int32_t large = CAPACITY; // define a 32-bit integer variable initialized to CAPACITY
    uint8_t small = 37; // define an 8-bit unsigned integer variable initialized to 37
#ifdef DEBUG // if DEBUG is defined
    std::cout << "[About to perform the addition]" << std::endl; // print a debug message
#endif // end of the conditional compilation block
    large += small; // Shorthand for "large = large + small;"
    std::cout << "The large integer is " << large << std::endl; // print the value of large 
    std::cout << "The small integer is " << int(small) << std::endl; // print the value of small.
    // Cast small to int to avoid printing a character like %.
    std::cout << std::endl << std::endl; // print two new lines
    return (0); // return 0 to indicate successful completion
}
