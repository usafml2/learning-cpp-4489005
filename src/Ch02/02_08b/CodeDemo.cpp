// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
#include <cstddef> // For size_t
#include <array>   // For std::size (C++17 feature)

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

    std::cout << "Outputting the arrays using loops:" << std::endl; // Indicate that we will output using loops
    
    for(size_t i = 0; i < AGE_LENGTH; ++i){ // Loop through the age array
        std::cout << "Age[" << i << "] = " << age[i] << std::endl; // Output each element using a loop
    }
    std::cout << std::endl; // New line for better readability
    for(size_t i = 0; i < sizeof(temperature)/sizeof(temperature[0]); ++i){ // Loop through the temperature array
    // sizeof(temperature)/sizeof(temperature[0]) calculates the number of elements in the temperature array.
    // The division by sizeof(temperature[0]) gives the size of a single element, so the total size divided by the
    //size of one element yields the count of elements.
        std::cout << "temp[" << i << "] = " << temperature[i] << std::endl; // Output each element using a loop
    }
    std::cout << sizeof(temperature) << std::endl;
    std::cout << sizeof(temperature[0]) << std::endl;
    std::cout << sizeof(temperature)/sizeof(temperature[0]) << std::endl;
    //std::cout << std::array::size(temperature) << std::endl; ? // C++17 feature, but shown here for educational purposes
    std::cout << std::endl << std::endl; // New lines for better readability
    return (0);
}
