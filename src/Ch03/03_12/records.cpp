#include "records.h"

Student::Student(int the_id, std::string the_name){ // constructor
    id = the_id; // assign the_id to id
    name = the_name; // assign the_name to name
}
int Student::get_id() const{// accessor function. getter function
    return id; // return the value of id
}
std::string Student::get_name() const{ // accessor function. getter function
    return name; // return the value of name
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){ // constructor
    id = the_id; //
    name = the_name;
    credits = the_credits;
}
int Course::get_id() const{ // accessor function. getter function
    return id; // return the value of id
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}


Grade::Grade(int sid, int cid, char grd){ // constructor
    student_id = sid;
    course_id = cid;
    grade = grd;
}
int Grade::get_student_id() const{ // accessor function. getter function
    return student_id;
}
int Grade::get_course_id() const{ // accessor function. getter function
    return course_id;
}
char Grade::get_grade() const{ // accessor function. getter function
    return grade;
}
