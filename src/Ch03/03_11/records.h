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

class Course{ // This is the declaration of the Course class. The Course class will have data members for the course's ID, name, and number of credits, and member functions to access those data members.
private:
    int id; // The id data member will store the course's ID, the name data member will store the course's name, and the credits data member will store the number of credits for the course. We use int to store the ID because it is a simple and efficient way to represent numeric identifiers. We use std::string to store the name because it is a convenient and efficient way to handle strings in C++. We use unsigned char to store the number of credits because it is a small positive integer that can represent values from 0 to 255, which is sufficient for most courses.
    std::string name; // The id data member will store the course's ID, the name data member will store the course's name, and the credits data member will store the number of credits for the course. We use int to store the ID because it is a simple and efficient way to represent numeric identifiers. We use std::string to store the name because it is a convenient and efficient way to handle strings in C++. We use unsigned char to store the number of credits because it is a small positive integer that can represent values from 0 to 255, which is sufficient for most courses.
    unsigned char credits; // The id data member will store the course's ID, the name data member will store the course's name, and the credits data member will store the number of credits for the course. We use int to store the ID because it is a simple and efficient way to represent numeric identifiers. We use std::string to store the name because it is a convenient and efficient way to handle strings in C++. We use unsigned char to store the number of credits because it is a small positive integer that can represent values from 0 to 255, which is sufficient for most courses.

public: // The public access specifier means that the members declared after it are accessible from outside the class. This is where we will declare the constructor and the member functions to access the data members.
    Course(int the_id, std::string the_name, unsigned char the_credits); // This is the declaration of the constructor for the Course class. The constructor takes three parameters: the_id, which will be used to initialize the id data member, the_name, which will be used to initialize the name data member, and the_credits, which will be used to initialize the credits data member.
    int get_id() const; // This is the declaration of a const member function that returns the course's ID.
    std::string get_name() const; // This is the declaration of a const member function that returns the course's name.
    int get_credits() const; // This is the declaration of a const member function that returns the number of credits for the course. We return an int instead of unsigned char because it is more common to use int for numeric values in C++, and it can still represent the same range of values as unsigned char.
};

class Grade{ // This is the declaration of the Grade class. The Grade class will have data members for the student ID, course ID, and letter grade, and member functions to access those data members.
private: // The private access specifier means that the members declared after it are only accessible from within the class. This is a common practice to encapsulate the data and provide controlled access through public member functions.
    int student_id; // The student_id data member will store the ID of the student associated with this grade, the course_id data member will store the ID of the course associated with this grade, and the grade data member will store the letter grade (e.g., 'A', 'B', 'C', etc.) associated with this grade. We use int to store the student ID and course ID because they are simple and efficient ways to represent numeric identifiers. We use char to store the letter grade because it is a single character that can represent the grade.
    int course_id;// The student_id data member will store the ID of the student associated with this grade, the course_id data member will store the ID of the course associated with this grade, and the grade data member will store the letter grade (e.g., 'A', 'B', 'C', etc.) associated with this grade. We use int to store the student ID and course ID because they are simple and efficient ways to represent numeric identifiers. We use char to store the letter grade because it is a single character that can represent the grade.
    char grade; // The student_id data member will store the ID of the student associated with this grade, the course_id data member will store the ID of the course associated with this grade, and the grade data member will store the letter grade (e.g., 'A', 'B', 'C', etc.) associated with this grade. We use int to store the student ID and course ID because they are simple and efficient ways to represent numeric identifiers. We use char to store the letter grade because it is a single character that can represent the grade.

public: // The public access specifier means that the members declared after it are accessible from outside the class. This is where we will declare the constructor and the member functions to access the data members.
    Grade(int sid, int cid, char grd); // This is the declaration of the constructor for the Grade class. The constructor takes three parameters: sid, which will be used to initialize the student_id data member, cid, which will be used to initialize the course_id data member, and grd, which will be used to initialize the grade data member.
    int get_student_id() const; // This is the declaration of a const member function that returns the ID of the student associated with this grade.
    int get_course_id() const; // This is the declaration of a const member function that returns the ID of the course associated with this grade.
    char get_grade() const; // This is the declaration of a const member function that returns the letter grade (e.g., 'A', 'B', 'C', etc.) associated with this grade.
};
