// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream> // for std::cout, std::endl
#include <string> // for std::string, not used in this code but included as per the original snippet

int main(){
    int a = 37; // Declare an integer variable 'a' and initialize it with the value 37
    int *ptr; // Declare a pointer to an integer named 'ptr'

    ptr = &a; // Assign the address of variable 'a' to the pointer 'ptr'

    std::cout << "           The content of a is " << a << std::endl; // Output the value of 'a'
    std::cout << "    ptr is pointing to address " << ptr << std::endl; // Output the address that 'ptr' is pointing to (which should be the address of 'a')
    std::cout << "           The address of a is " << &a << std::endl; // Output the address of 'a' (should be the same as the value of 'ptr')
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl; // Output the value at the address that 'ptr' is pointing to (dereferencing 'ptr', should output the value of 'a')
    std::cout << "         The address of ptr is " << &ptr << std::endl; // Output the address of the pointer variable 'ptr' itself
    
    std::cout << std::endl << std::endl;
    return (0);
}
