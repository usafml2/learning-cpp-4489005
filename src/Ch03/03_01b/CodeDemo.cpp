// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream> // The iostream header is included to allow us to use the standard input/output stream objects, such as std::cout, which we will use to output information about the cow.
#include <string> // The string header is included to allow us to use the std::string class, which we will use to store the name of the cow as a string.

enum class cow_purpose {dairy, meat, hide, pet
}; // The enum class is a scoped enumeration, which means that the enumerators are accessed using the scope resolution operator (::) and are not implicitly converted to integers. This provides better type safety and prevents naming conflicts or namespace pollution.

struct cow{ // A structure is a user-defined data type that groups related variables of different types together. In this case, we are defining a structure called "cow" that has three members: name, age, and purpose.
   std::string name;
   int age; 
   cow_purpose purpose; // The purpose member is of type cow_purpose, which is the enum class we defined earlier. This allows us to specify the purpose of the cow using the enumerators defined in the cow_purpose enum class.
};


int main(){
    cow my_cow; // We can create an instance of the cow structure called "my_cow". This allows us to access the members of the structure and assign values to them.
    my_cow.age = 5; // We can access the members of the structure using the dot operator (.) and assign values to them. In this case, we are assigning the age of the cow to 5.
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy; // We can also assign the purpose of the cow using the enumerators defined in the cow_purpose enum class. In this case, we are assigning the purpose of the cow to dairy.

    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." <<
    std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
