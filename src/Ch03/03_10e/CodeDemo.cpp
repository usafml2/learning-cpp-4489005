// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector> // We need to include the vector header to use the std::vector class.
#include <iostream> // We need to include the iostream header to use the std::cout
#include <string> // We need to include the string header to use the std::string class for the cow's name.
#include "cow.h" // We need to include the cow.h header to use the cow class and the cow_purpose enum class.

int main(){
    std::vector<cow> cattle; // We declare a vector of cow objects called cattle. A vector is a dynamic array that can grow and shrink in size as needed. We use the cow class as the type of the elements in the vector, which means that each element in the vector will be an object of the cow class.
    
    cattle.push_back(cow("Betty", 6, cow_purpose::meat)); // We use the push_back member function of the vector to add a new cow object to the end of the cattle vector. The push_back function takes an object of the cow class as an argument, which we create using the constructor of the cow class. We pass the name "Betty", the age 6, and the purpose cow_purpose::meat as arguments to the constructor to create a new cow object and add it to the cattle vector.
    cattle.push_back(cow("Libby", 4, cow_purpose::hide)); // We use the push_back member function of the vector to add another cow object to the end of the cattle vector. We create a new cow object using the constructor of the cow class, and we pass the name "Libby", the age 4, and the purpose cow_purpose::hide as arguments to the constructor to create a new cow object and add it to the cattle vector.
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet)); // We use the push_back member function of the vector to add another cow object to the end of the cattle vector. We create a new cow object using the constructor of the cow class, and we pass the name "Trudy", the age 5, and the purpose cow_purpose::pet as arguments to the constructor to create a new cow object and add it to the cattle vector.
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy)); // We use the push_back member function of the vector to add another cow object to the end of the cattle vector. We create a new cow object using the constructor of the cow class, and we pass the name "Betsy", the age 2, and the purpose cow_purpose::dairy as arguments to the constructor to create a new cow object and add it to the cattle vector.

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl; // We use the begin member function of the vector to get an iterator to the first element in the cattle vector, which is a cow object. We then use the arrow operator (->) to call the get_name member function of the cow class on the cow object pointed to by the iterator to get the name of the first cow and print it to the console.
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl; // We use the subscript operator ([]) to access the cow object at index 1 in the cattle vector, which is the second cow object. We then use the dot operator (.) to call the get_name member function of the cow class on the cow object at index 1 to get the name of the second cow and print it to the console.
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl; // We use the prev function to get an iterator to the cow object that is two positions before the end of the cattle vector, which is the next to last cow object. We then use the arrow operator (->) to call the get_name member function of the cow class on the cow object pointed to by the iterator to get the name of the next to last cow and print it to the console.
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl; // We use the end member function of the vector to get an iterator to one past the last element in the cattle vector, and we subtract 1 to get an iterator to the last element. We then use the arrow operator (->) to call the get_name member function of the cow class on the cow object pointed to by the iterator to get the name of the last cow and print it to the console.

    std::cout << std::endl << std::endl;
    return (0);
}
