#include "records.h" // include records.h

Student::Student(int the_id, std::string the_name){ // constructor
    id = the_id; // set student ID
    name = the_name; // set student name
}
int Student::get_id() const{ // get student ID
    return id; // return student ID
}
std::string Student::get_name() const{ // get student name
    return name; // return student name
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){ // constructor
    id = the_id; // set course ID
    name = the_name; // set course name
    credits = the_credits; // set course credits
}
int Course::get_id() const{ // get course ID
    return id; // return course ID
}
std::string Course::get_name() const{ // get course name
    return name; // return course name
}
int Course::get_credits() const{ // get course credits
    return credits; // return course credits
}


Grade::Grade(int sid, int cid, char grd){ // constructor
    student_id = sid; // set student ID
    course_id = cid; // set course ID
    grade = grd; // set letter grade
}
int Grade::get_student_id() const{ // get student ID
    return student_id; // return student ID
}
int Grade::get_course_id() const{ // get course ID
    return course_id; // return course ID
}
char Grade::get_grade() const{ // get letter grade
    return grade; // return letter grade
}

void StudentRecords::add_student(int sid, std::string sname){ // add a student
    students.push_back(Student(sid, sname)); // add Student object to vector
}

void StudentRecords::add_course(int cid, std::string cname, unsigned char ccredits){ // add a course
    courses.push_back(Course(cid, cname, ccredits)); // add Course object to vector
}

void StudentRecords::add_grade(int sid, int cid, char grade){ // add a grade
    grades.push_back(Grade(sid, cid, grade)); // add Grade object to vector
}

float StudentRecords::get_num_grade(char letter) const{ // get numeric grade from letter grade
    float num_grd;          // float for the numeric grade
    switch (letter){ // switch on letter grade
        case 'A': num_grd = 4.0f; // case A
            break; // break
        case 'B': num_grd = 3.0f; // case B
            break;
        case 'C': num_grd = 2.0f; // case C
            break;
        case 'D': num_grd = 1.0f; // case D
            break;
        default:  num_grd = 0.0f; // default case
            break;
    };
    return num_grd; // return numeric grade
}

std::string StudentRecords::get_student_name(int sid) const{ // get student name
    int i = 0; // index variable
    while (i < students.size() && students[i].get_id() != sid) // loop to find student ID
        i++; // increment index
    return students[i].get_name(); // return student name
}

unsigned char StudentRecords::get_course_credits(int cid) const{ // get course credits
    int j = 0; // index variable
    while (j < courses.size() && courses[j].get_id() != cid) // loop to find course ID
        j++; // increment index
    return courses[j].get_credits(); // return course credits
}

float StudentRecords::get_GPA(int sid) const{ // get GPA for a student
     float points = 0.0f, credits = 0.0f; // points and credits accumulators
     for (const Grade& grd : grades) // loop through grades
        if (grd.get_student_id() == sid){ // if grade matches student ID
            unsigned char current_credits = get_course_credits(grd.get_course_id()); // get course credits
            credits += current_credits; // accumulate credits
            points += get_num_grade(grd.get_grade()) * current_credits; // accumulate points
        }
       return (points / credits); // return GPA
}