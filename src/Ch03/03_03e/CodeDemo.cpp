// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet}; // Define an enum class named cow_purpose with four possible values: dairy, meat, hide, and pet. This enum class will be used to specify the purpose of a cow object.

class cow{ // Define a class named cow, which will represent a cow object with attributes such as name, age, and purpose.
public: // Public member functions of the cow class, which can be accessed and called from outside the class.
    cow(std::string name_i, int age_i, cow_purpose purpose_i){ // Constructor to initialize the cow object with name, age, and purpose.
        name = name_i; // Assign the input parameters to the member variables of the cow class.
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{ // Getter function to return the name of the cow. The const keyword indicates that this function does not modify any member variables of the cow class.
        return name;
    }
    int get_age() const{ // Getter function to return the age of the cow. The const keyword indicates that this function does not modify any member variables of the cow class.
        return age;
    }
    cow_purpose get_purpose() const{ // Getter function to return the purpose of the cow. The const keyword indicates that this function does not modify any member variables of the cow class.
        return purpose;
    }
    void set_age(int new_age){ // Setter function to update the age of the cow.
        age = new_age; // Assign the new age to the age member variable of the cow class.
    }
private: // Private member variables of the cow class, which can only be accessed and modified through the public member functions.
    std::string name; // Member variable to store the name of the cow.
    int age;
    cow_purpose purpose; // Member variable to store the purpose of the cow, which is of type cow_purpose (an enum class).
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet); // Create a cow object with name "Hildy", age 7, and purpose "pet". :: is
    // the scope resolution operator, used to access members of an enum class. Its scope is outside the main function, so we need to specify that we want to use the cow_purpose enum class and its pet member.
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
