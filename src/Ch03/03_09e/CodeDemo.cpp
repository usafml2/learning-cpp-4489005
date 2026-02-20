// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector> // Include the vector library 
// to use the vector class template, which is a sequence container
// that encapsulates dynamic size array
#include <string> // Include the string library to use the string class,
// which is a sequence of characters
#include <iostream> // Include the iostream library
// to use std::cout and std::endl

int main(){
    std::vector<int> primes; // Declare a vector of integers named primes.
    // A vector is a dynamic array that can grow in size as needed.

    primes.push_back(2); // Add the prime number 2 to the end of the vector.
    primes.push_back(3); // Add the prime number 3 to the end of the vector.
    primes.push_back(5); // Add the prime number 5 to the end of the vector.
    primes.push_back(7); // Add the prime number 7 to the end of the vector.
    primes.push_back(11); // Add the prime number 11 to the end of the vector.

    std::cout << "The vector has " << primes.size() << " elements." << std::endl;

    std::cout << "The element at index 2 is " << primes[2] << std::endl;

    primes[2] = 13; // Change the element at index 2 to 13.

    std::cout << "The element at index 2 is " << primes[2] << std::endl;

    std::cout << std::endl << std::endl;

    return (0);
}
