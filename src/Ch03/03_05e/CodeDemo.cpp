// Learning C++ 
// Exercise 03_05
// Using Several Source Files, by Eduardo Corpeño 

#include <iostream> // Include the iostream library for input and output operations
#include <string> // Include the string library to use the std::string class for handling text
#include "cow.h" // Include the header file for the cow class to create cow objects and use its member functions

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);// Create an instance of the cow class named my_cow with the name "Hildy", age 7, and purpose as pet
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;// Output the name and purpose of my_cow to the console. The purpose is cast to an integer to display its underlying value from the cow_purpose enumeration. my_cow.get_name is called to retrieve the name of the cow, and my_cow.get_purpose is called to retrieve the purpose of the cow, which is then cast to an integer for display.
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
