// Learning C++ 
// Exercise 05_03
// Using Functions, by Eduardo Corpeño 

#include <iostream> // for std::cout, std::cin, std::endl
#include <vector> // for std::vector
#include "records.h" // include records.h
#include <string> // for std::string

void initialize(StudentRecords&); // function to initialize student records

int main(){ // main function
    int id; // student ID
    StudentRecords SR; // StudentRecords object

    initialize(SR); // initialize student records
    
    std::cout << "Enter a student ID: " << std::flush; // prompt for student ID
    std::cin >> id; // read student ID

    std::string student_str = SR.get_student_name(id); // get student name

        std::cout << "The GPA for " << student_str << " is " << SR.get_GPA(id) << std::endl; // display GPA
    
    std::cout << std::endl << std::endl; // two blank lines
    return (0); // return success
}

void initialize(StudentRecords& srec){ // function to initialize student records
    srec.add_student(1, "George P. Burdell"); // add first student
    srec.add_student(2, "Nancy Rhodes"); // add second student

    srec.add_course(1, "Algebra", 5); // add courses
    srec.add_course(2, "Physics", 4); // add courses
    srec.add_course(3, "English", 3); // add courses
    srec.add_course(4, "Economics", 4); // add courses

    srec.add_grade(1, 1, 'B'); // add grades
    srec.add_grade(1, 2, 'A'); // add grades
    srec.add_grade(1, 3, 'C'); // add grades
    srec.add_grade(2, 1, 'A'); // add grades
    srec.add_grade(2, 2, 'A'); // add grades
    srec.add_grade(2, 4, 'B'); // add grades
};

