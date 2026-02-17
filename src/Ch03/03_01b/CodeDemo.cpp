// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet
}; // The enum class is a scoped enumeration, which means that the enumerators are accessed using the scope resolution operator (::) and are not implicitly converted to integers. This provides better type safety and prevents naming conflicts or namespace pollution.

struct cow{
   std::string name;
   int age; 
   cow_purpose purpose;
};


int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." <<
    std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
