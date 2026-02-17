// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream> // for std::cout, std::endl
#include <string> // for std::string, not used in this code but included as per the original snippet

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
