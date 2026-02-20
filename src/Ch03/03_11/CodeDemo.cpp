// Learning C++ 
// Challenge 03_11
// Create some classes, by Eduardo Corpeño 

#include <iostream> // for std::cout and std::endl
#include "records.h" // for the Student, Course, and Grade classes. We need to include the records.h header to use the Student, Course, and Grade classes that we defined in that header file.

int main(){
    Student my_student(1, "Hilda Jones"); // constructor. Create an object of type Student. my_student is the name of the object. 1 and "Hilda Jones" are the arguments passed to the constructor.
    Course my_course(7, "Physics 101", 4); // constructor. Create an object of type Course. my_course is the name of the object. 7, "Physics 101", and 4 are the arguments passed to the constructor.
    Grade my_grade(1, 7, 'B'); // constructor. Create an object of type Grade. my_grade is the name of the object. 1, 7, and 'B' are the arguments passed to the constructor.

    std::cout << "Student: " << my_student.get_name() << std::endl; // std::cout is the standard output stream. We use it to print output to the console. The << operator is used to insert data into the output stream. "Student: " is a string literal that we want to print. my_student.get_name() is a function call that returns the name of the student, which we also want to print. std::endl is used to insert a newline character and flush the output buffer.
    std::cout << "Course: " << my_course.get_name() << std::endl; // std::cout is the standard output stream. We use it to print output to the console. The << operator is used to insert data into the output stream. "Course: " is a string literal that we want to print. my_course.get_name() is a function call that returns the name of the course, which we also want to print. std::endl is used to insert a newline character and flush the output buffer.
    std::cout << "Credits: " << my_course.get_credits() << std::endl; // std::cout is the standard output stream. We use it to print output to the console. The << operator is used to insert data into the output stream. "Credits: " is a string literal that we want to print. my_course.get_credits() is a function call that returns the number of credits for the course, which we also want to print. std::endl is used to insert a newline character and flush the output buffer.
    std::cout << "Grade: " << my_grade.get_grade() << std::endl; // std::cout is the standard output stream. We use it to print output to the console. The << operator is used to insert data into the output stream. "Grade: " is a string literal that we want to print. my_grade.get_grade() is a function call that returns the grade for the student in the course, which we also want to print. std::endl is used to insert a newline character and flush the output buffer.

    std::cout << std::endl << std::endl;
    return (0);
}
