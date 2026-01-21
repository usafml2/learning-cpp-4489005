// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream> // include the input/output library
#include <typeinfo> // include the type information library

int main(){
    auto a = 8; // 'a' is inferred to be of type int
    auto b = 12345678901; // 'b' is inferred to be of type long long
    auto c = 3.14f; // 'c' is inferred to be of type float
    auto d = 3.14; // 'd' is inferred to be of type double
    auto e = true; // 'e' is inferred to be of type bool
    auto f = 'd'; // 'f' is inferred to be of type char
    auto g = "C++ rocks!"; // 'g' is inferred to be of type const char*

    std::cout << "The type of a is " << typeid(a).name() << std::endl; // print the type of 'a'
    std::cout << "The type of b is " << typeid(b).name() << std::endl; // print the type of 'b'
    std::cout << "The type of c is " << typeid(c).name() << std::endl; // print the type of 'c'
    std::cout << "The type of d is " << typeid(d).name() << std::endl; // print the type of 'd'
    std::cout << "The type of e is " << typeid(e).name() << std::endl; // print the type of 'e'
    std::cout << "The type of f is " << typeid(f).name() << std::endl; // print the type of 'f'
    std::cout << "The type of g is " << typeid(g).name() << std::endl; // print the type of 'g'

    std::cout << std::endl << std::endl; // print two new lines for better readability
    return (0); // indicate that the program ended successfully
}
