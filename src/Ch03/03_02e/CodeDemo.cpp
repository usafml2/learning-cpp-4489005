// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{ // This is the class definition, which includes the data members and member functions of the class.
public: // This is the public section of the class, which includes the member functions that can be accessed from outside the class.
    cow(std::string name_i, int age_i, cow_purpose purpose_i){ // This is the constructor of the class, which is a special member function that is called when an object of the class is created. It initializes the data members of the class with the values passed as arguments.
        name = name_i; // This assigns the value of the "name_i" parameter to the "name" data member of the class.
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{ // This is a member function that returns the name of the cow. The "const" keyword indicates that this function does not modify the data members of the class.
        return name;
    }
    int get_age() const{ // This is a member function that returns the age of the cow. The "const" keyword indicates that this function does not modify the data members of the class.
        return age;
    }
    cow_purpose get_purpose() const{ // This is a member function that returns the purpose of the cow. The "const" keyword indicates that this function does not modify the data members of the class.
        return purpose;
    }
private: // This is the private section of the class, which includes the data members that cannot be accessed from outside the class.
    std::string name; // This is a data member that stores the name of the cow.
    int age; // This is a data member that stores the age of the cow.
    cow_purpose purpose; // This is a data member that stores the purpose of the cow, which is of type "cow_purpose", an enumeration defined above.
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet); // This creates an object of the "cow" class named "my_cow" and initializes it with the name "Hildy", age 7, and purpose "pet".

    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
