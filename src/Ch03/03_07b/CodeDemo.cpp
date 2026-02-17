// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream> // for std::cout, std::endl
#include <string> // for std::string
#include "cow.h" // for cow class definition

int main(){
    cow *my_cow; // declare a pointer to a cow object


    my_cow = new cow("Gertie", 3, cow_purpose::hide);// create a new cow object and assign its address to the pointer
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl; // print the cow's name and purpose (cast enum to int for display). my_cow->get_name() is called to retrieve the name of the cow, and my_cow->get_purpose() is called to retrieve the purpose of the cow, which is then cast to an integer for display. -> is used to access the members of the cow object through the pointer.
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;

    delete my_cow; // deallocate the memory used for the cow object to prevent memory leaks. This is important because we used new to allocate memory for the cow object, and we need to free that memory when we're done with it.
    
    std::cout << std::endl << std::endl;
    return (0);
}
