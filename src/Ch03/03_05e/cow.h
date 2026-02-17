#pragma once // Prevent multiple inclusions of this header file

#ifndef COW_H // Include guard to prevent multiple inclusions of this header file
#define COW_H // COW_H is defined to prevent multiple inclusions of this header file
#include <string> // Include the string library to use std::string

enum class cow_purpose {dairy, meat, hide, pet}; // Define an enumeration for cow purposes with four possible values: dairy, meat, hide, and pet

class cow{ // Define a class named cow
public: // Public members of the cow class
    cow(std::string name_i, int age_i, cow_purpose purpose_i); // Constructor for the cow class that takes a name, age, and purpose as parameters
    std::string get_name() const; // Getter function to retrieve the name of the cow, marked as const to indicate it does not modify the object
    int get_age() const; // Getter function to retrieve the age of the cow, marked as const to indicate it does not modify the object
    cow_purpose get_purpose() const; // Getter function to retrieve the purpose of the cow, marked as const to indicate it does not modify the object
    void set_age(int new_age); // Setter function to update the age of the cow
private: // Private members of the cow class. Unseen by users of the class, only accessible within the class itself
    std::string name; // Private member variable to store the name of the cow
    int age; // Private member variable to store the age of the cow
    cow_purpose purpose; // Private member variable to store the purpose of the cow
};

#endif // COW_H // End of the include guard for COW_H
