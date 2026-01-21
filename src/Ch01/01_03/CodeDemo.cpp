// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream> // std::cout, std::cin, std::endl, std::flush
#include <string> // std::string

int main(){ // Main function - execution starts here
    std::string str; // Variable to hold user input
    std::cout << "What is your name?" << std::flush; // Prompt user for their name
    std::cin >> str; // Read user input into variable
    std::cout << "Nice to meet you, " << str << "!" << std::endl; // Greet the user

    std::cout << std::endl << std::endl; // Add some space before exiting
    return (0); // Indicate that the program ended successfully
}
