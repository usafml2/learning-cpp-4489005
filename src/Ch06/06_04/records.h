#pragma once

#include <vector>
#include <string>
#include <fstream>

class Student{ // Student class
private:
    int id;
    std::string name;

public:
    Student(int the_id, std::string the_name); // constructor definition
    int get_id() const; // getter for id
    std::string get_name() const; // getter for name
};

class Course{ // Course class
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

class Grade{ // Grade class
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

class StudentRecords{ // StudentRecords class
private:
    std::vector<Student> students;
    std::vector<Course> courses;
    std::vector<Grade> grades;

    float get_num_grade(char) const;
    
public:
    void add_student(int, std::string);
    void add_course(int, std::string, unsigned char);
    void add_grade(int, int, char);

    std::string get_student_name(int) const;
    unsigned char get_course_credits(int) const;
    float get_GPA(int) const;
    std::string get_course_name(int) const;
    void report_card(int, std::ostream&);
    void report_file(std::ofstream&); 
};
