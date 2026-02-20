#include "cow.h" // include cow class definition

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){ // constructor implementation
    name = name_i; // initialize name
    age = age_i; // initialize age
    purpose = purpose_i; // initialize purpose
}
std::string cow::get_name(){ // getter for name implementation
    return name; // return name
}
int cow::get_age(){ // getter for age implementation
    return age; // return age
}
cow_purpose cow::get_purpose(){ // getter for purpose implementation
    return purpose;
}
void cow::set_age(int new_age){ // setter for age implementation
    age = new_age;
}
