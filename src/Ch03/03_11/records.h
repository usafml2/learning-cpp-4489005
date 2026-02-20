#pragma once // This is a header guard to prevent multiple inclusions of this header file.
// It ensures that the contents of this header file are only included once in a single 
// compilation unit, which can help prevent issues with multiple definitions and
// improve compilation times.

#include <string> // for std::string. We need to include the string header to use the std::string class, which we will use to store the names of students and courses.

class Student{ // This is the declaration of the Student class. A class is a user-defined type that can contain data members (variables) and member functions (methods). The Student class will have data members for the student's ID and name, and member functions to access those data members.
private: // The private access specifier means that the members declared after it are only accessible from within the class. This is a common practice to encapsulate the data and provide controlled access through public member functions.
    int id; // The id data member will store the student's ID, and the name data member will store the student's name. We use int to store the ID because it is a simple and efficient way to represent numeric identifiers.
    std::string name; // The id data member will store the student's ID, and the name data member will store the student's name. We use std::string to store the name because it is a convenient and efficient way to handle strings in C++.

public: // The public access specifier means that the members declared after it are accessible from outside the class. This is where we will declare the constructor and the member functions to access the data members.
    Student(int the_id, std::string the_name); // This is the declaration of the constructor for the Student class. A constructor is a special member function that is called when an object of the class is created. It is used to initialize the data members of the class. The constructor takes two parameters: the_id, which will be used to initialize the id data member, and the_name, which will be used to initialize the name data member.
    int get_id() const; // This is the declaration of a const member function that returns the student's ID.
    std::string get_name() const; // This is the declaration of a const member function that returns the student's name.
};

class Course{
private:
    int id;
    std::string name;
    unsigned char credits;

public:
    Course(int the_id, std::string the_name, unsigned char the_credits);
    int get_id() const;
    std::string get_name() const;
    int get_credits() const;
};

class Grade{
private:
    int student_id;
    int course_id;
    char grade;

public:
    Grade(int sid, int cid, char grd);
    int get_student_id() const;
    int get_course_id() const;
    char get_grade() const;
};
