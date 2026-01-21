// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4

int main(){
    const size_t  AGE_LENGTH = 4; // Define constant for array size
    int age[AGE_LENGTH]; // Define an array of integers with size AGE_LENGTH
    float temperature[] ={31.5, 32.7, 38.9}; // Define and initialize an array of floats

    age[0] = 25; // Assign values to each element of the age array
    age[1] = 20; // Assign values to each element of the age array
    age[2] = 19; // Assign values to each element of the age array
    age[3] = 19; // Assign values to each element of the age array

    std::cout << "The Age array has " << AGE_LENGTH << " elements." << std::endl; // Output the size of the age array

    std::cout << "Age[0] = " << age[0] << std::endl; // Output each element of the age array
    std::cout << "Age[1] = " << age[1] << std::endl; // Output each element of the age array
    std::cout << "Age[2] = " << age[2] << std::endl; // Output each element of the age array
    std::cout << "Age[3] = " << age[3] << std::endl; // Output each element of the age array
    std::cout << std::endl; // New line for better readability
    std::cout << "temp[0] = " << temperature[0] << std::endl; // Output each element of the temperature array
    std::cout << "temp[1] = " << temperature[1] << std::endl; // Output each element of the temperature array
    std::cout << "temp[2] = " << temperature[2] << std::endl; // Output each element of the temperature array

    std::cout << std::endl << std::endl; // New lines for better readability
    return (0);
}
