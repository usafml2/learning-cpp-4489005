// Learning C++ 
// Challenge Solution 03_12
// Create some classes, by Eduardo Corpeño 

#include <iostream> // for std::cout and std::endl
#include "records.h" // for the Student, Course, and Grade classes

int main(){
    Student my_student(1, "Hilda Jones"); // constructor. Create an object of type Student.
    // my_student is the name of the object. 1 and "Hilda Jones" are the arguments 
    //passed to the constructor.
    Course my_course(7, "Physics 101", 4); // constructor. Create an object of type Course.
    // my_course is the name of the object. 7, "Physics 101", and 4 are the arguments 
    // passed to the constructor.
    Grade my_grade(1, 7, 'B'); /* Single not double quotes*/ 
    // constructor. Create an object of type Grade. my_grade is the name of the object.
    // 1, 7, and 'B' are the arguments passed to the constructor.

    std::cout << "Student: " << my_student.get_name() << std::endl;
    std::cout << "Course: " << my_course.get_name() << std::endl;
    std::cout << "Credits: " << my_course.get_credits() << std::endl;
    std::cout << "Grade: " << my_grade.get_grade() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
