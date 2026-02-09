// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream> // std::cout, std::cin, std::endl, std::flush
#include <string> // std::string

int main(){ // Main function - execution starts here
    std::string str; // str is a variable to hold user input of class string
    std::cout << "What is your name?" << std::flush; // Prompt user for their name. flush 
    //is used to ensure the prompt is displayed before waiting for input
    std::cin >> str; // Read user input into variable. Here str is a string used to store the name
    std::cout << "Nice to meet you, " << str << "!" << std::endl; // Greet the user

    std::cout << std::endl << std::endl; // Add some space before exiting
    return (0); // Indicate that the program ended successfully
}
