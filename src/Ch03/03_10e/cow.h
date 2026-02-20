#pragma once // cow.h

#ifndef COW_H // include guard
#define COW_H // include guard
#include <string> // for std::string

enum class cow_purpose {dairy, meat, hide, pet}; // enum class for cow purposes

class cow{ // cow class definition
public: // public members
    cow(std::string name_i, int age_i, cow_purpose purpose_i); // constructor
    std::string get_name(); // getter for name
    int get_age(); // getter for age
    cow_purpose get_purpose(); // getter for purpose
    void set_age(int new_age); // setter for age
private: // private members
    std::string name; // cow's name
    int age; // cow's age
    cow_purpose purpose; // cow's purpose
};

#endif // COW_H
