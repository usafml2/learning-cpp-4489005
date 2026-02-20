// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector> // We need to include the vector header to use the std::vector class.
#include <iostream> // We need to include the iostream header to use the std::cout
// object for output.
#include <string> // We need to include the string header to use the
// std::string class for the cow's name.
#include "cow.h" // We need to include the cow.h header to use the cow class and the
// cow_purpose enum class.

int main(){
    std::vector<cow> cattle;
    
    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;// prev() is a function that takes an iterator and a number, and returns an iterator that is that many positions before the original iterator. In this case, we want to get the cow that is two positions before the end of the vector, which is the next to last cow.
    std::cout << "The last cow is " << (cattle.end() -1)->get_name() << std::endl; // end() returns an iterator that points to one past the last element in the vector, so we need to subtract 1 to get the last element.
    
    std::cout << std::endl << std::endl;
    return (0);
}
