#pragma once // records.h

#include <vector> // for std::vector
#include <string> // for std::string

class Student{ // Student class
private: // data members
    int id; // student ID
    std::string name; // student name

public: // member functions
    Student(int the_id, std::string the_name); // constructor
    int get_id() const; // get student ID
    std::string get_name() const; // get student name
};

class Course{ // Course class
private: // data members
    int id; // course ID
    std::string name; // course name
    unsigned char credits; // course credits

public: // member functions
    Course(int the_id, std::string the_name, unsigned char the_credits); // constructor
    int get_id() const; // get course ID
    std::string get_name() const; // get course name
    int get_credits() const; // get course credits
};

class Grade{ // Grade class
private: // data members
    int student_id; // student ID
    int course_id; // course ID
    char grade; // letter grade

public: // member functions
    Grade(int sid, int cid, char grd); // constructor
    int get_student_id() const; // get student ID
    int get_course_id() const; // get course ID
    char get_grade() const; // get letter grade
};

class StudentRecords{ // StudentRecords class
private: // data members
    std::vector<Student> students; // vector of Student objects
    std::vector<Course> courses; // vector of Course objects
    std::vector<Grade> grades; // vector of Grade objects

    float get_num_grade(char) const; // get numeric grade from letter grade
    
public: // member functions
    void add_student(int, std::string); // add a student
    void add_course(int, std::string, unsigned char); // add a course
    void add_grade(int, int, char); // add a grade

    std::string get_student_name(int) const; // get student name
    unsigned char get_course_credits(int) const; // get course credits
    float get_GPA(int) const; // get GPA for a student
};
