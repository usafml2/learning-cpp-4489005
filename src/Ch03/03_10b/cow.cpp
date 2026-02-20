#include "cow.h" // We need to include the cow.h header to use the cow class and the cow_purpose enum class. The cow.h header contains the declaration of the cow class and the cow_purpose enum class, which we need to define the member functions of the cow class in this cow.cpp file. By including the cow.h header, we can use the declarations of the cow class and the cow_purpose enum class to implement the member functions of the cow class in this file.

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){ // This is the definition of the constructor of the cow class. A constructor is a special member function that is called when an object of the class is created. It is used to initialize the data members of the class. In this case, the constructor takes three parameters: name_i, age_i, and purpose_i, which are used to initialize the name, age, and purpose data members of the cow class. The constructor does not have a return type, and its name is the same as the class name.
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name(){ // This is the definition of the get_name member function of the cow class. A member function is a function that is defined inside a class and can access the data members of the class. The get_name member function returns the name of the cow, which is a string. It does not take any parameters, and its return type is std::string.
    return name; // This statement returns the value of the name data member of the cow class. The return statement is used to exit a function and return a value to the caller. In this case, we return the name of the cow when the get_name function is called.
}
int cow::get_age(){ // This is the definition of the get_age member function of the cow class. It returns the age of the cow, which is an integer. It does not take any parameters, and its return type is int.
    return age; // This statement returns the value of the age data member of the cow class. The return statement is used to exit a function and return a value to the caller. In this case, we return the age of the cow when the get_age function is called.
}
cow_purpose cow::get_purpose(){ // This is the definition of the get_purpose member function of the cow class. It returns the purpose of the cow, which is of type cow_purpose.
    return purpose; // This statement returns the value of the purpose data member of the cow class. The return statement is used to exit a function and return a value to the caller. In this case, we return the purpose of the cow when the get_purpose function is called.
}
void cow::set_age(int new_age){ // This is the definition of the set_age member function of the cow class. It takes an integer parameter new_age and sets the age of the cow to that value. It does not return anything, so its return type is void.
    age = new_age; // This statement assigns the value of new_age to the age data member of the cow class. The assignment operator (=) is used to assign a value to a variable. In this case, we set the age of the cow to the new_age value when the set_age function is called.
}
