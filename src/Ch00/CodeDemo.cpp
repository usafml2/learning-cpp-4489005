// Learning C++ 
// Exercise 00_03 with modifications done again 3/13/2025
// Using the exercise files on GitHub, by Eduardo Corpeño 

#include <iostream>

int main(){
    float num_1, num_2, result; // variables to hold user input and result

    std::cout << "Enter number 1: " << std::flush; // flush forces the output to appear before waiting for input
    std::cin >> num_1; // get first number from user
    std::cout << "Enter number 2: " << std::flush; // flush forces the output to appear before waiting for input
    std::cin >> num_2; // get second number from user
    
    result = num_1 + num_2; // perform addition
    
    std::cout << "The result of the addition is " << result << std::endl; // display the result
    
    std::cout << std::endl << std::endl; // add some space before exiting
    return (0);
}
