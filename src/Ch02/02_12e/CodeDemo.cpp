// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint> // for uint8_t

enum class cow_purpose {dairy, meat, hide, pet}; //  by default, the first enumerator has the value 0, and each subsequent enumerator's value is one greater than the previous enumerator's value. So, in this case, dairy would have the value 0, meat would have the value 1, hide would have the value 2, and pet would have the value 3.
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery}; //  by default, the first enumerator has the value 0, and each subsequent enumerator's value is one greater than the previous enumerator's value. So, in this case, canned would have the value 0, frozen would have the value 1, meat would have the value 2, laundry would have the value 3, dairy would have the value 4, and bakery would have the value 5.

int main(){
    int meat = 8;
    cow_purpose a; // declaration of a variable of type cow_purpose, which is an enumeration type. The variable a can hold any of the values defined in the cow_purpose enumeration (dairy, meat, hide, pet).

    a = cow_purpose::meat; // assignment of the value cow_purpose::meat to the variable a. This means that a now holds the value corresponding to the meat enumerator in the cow_purpose enumeration, which is 1.

    std::cout << "a = " << (int) a << std::endl; // int is a type cast operator that converts the value of a to an integer. This is necessary because a is of type cow_purpose, which is an enumeration type, and we want to print its underlying integer value. The output will be "a = 1" since cow_purpose::meat has the value 1.

    std::cout << std::endl << std::endl;
    return (0);
}
