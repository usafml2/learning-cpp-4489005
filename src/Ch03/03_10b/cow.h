#pragma once // This is a non-standard but widely supported preprocessor directive that serves the same purpose as an include guard. It tells the compiler to include this header file only once in a single compilation unit, preventing multiple inclusions and potential errors. However, since it is not part of the C++ standard, it may not be supported by all compilers, so using traditional include guards (as shown below) is often recommended for maximum portability.

#ifndef COW_H // This is an include guard. It prevents the contents of this header file from being included more than once in a single compilation unit, which can cause errors.
#define COW_H // If COW_H is not defined, we define it and include the contents of this header file. If it is already defined, we skip the contents of this header file.
#include <string>

enum class cow_purpose {dairy, meat, hide, pet}; // This is an enumeration that defines the different purposes a cow can have. We use an enum class to create a scoped enumeration, which means that the enumerators (dairy, meat, hide, pet) are only accessible through the cow_purpose scope (cow_purpose::dairy, cow_purpose::meat, etc.). This helps to prevent naming conflicts and makes the code more readable.

class cow{ // This is the declaration of the cow class. A class is a user-defined type that can have data members (variables) and member functions (methods). The cow class has three data members: name, age, and purpose. It also has a constructor and several member functions to get and set the values of the data members.
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name();
    int get_age();
    cow_purpose get_purpose(); // This member function returns the purpose of the cow, which is of type cow_purpose.
    void set_age(int new_age); // This member function takes an integer parameter new_age and sets the age of the cow to that value. It does not return anything, so its return type is void.
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif // COW_H
