// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "What is your name?" << std::endl;
    std::string str;
    std::cin >> str;
    std::cout << str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
