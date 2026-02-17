#include "cow.h" // Include the header file for the cow class to implement its member functions

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){ // Constructor for the cow class that initializes the name, age, and purpose of the cow using the provided parameters
    name = name_i; // Initialize the name of the cow with the value passed as name_i
    age = age_i; // Initialize the age of the cow with the value passed as age_i
    purpose = purpose_i; // Initialize the purpose of the cow with the value passed as purpose_i
}
std::string cow::get_name() const{ // Getter function to retrieve the name of the cow, marked as const to indicate it does not modify the object
    return name;
}
int cow::get_age() const{ // Getter function to retrieve the age of the cow, marked as const to indicate it does not modify the object
    return age;
}
cow_purpose cow::get_purpose() const{ // Getter function to retrieve the purpose of the cow, marked as const to indicate it does not modify the object
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}
