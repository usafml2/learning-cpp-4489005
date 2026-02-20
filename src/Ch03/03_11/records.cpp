// Write your implementation code here
#include "records.h" // for the Student, Course, and Grade classes. We need to include the records.h header to use the Student, Course, and Grade classes that we defined in that header file. This allows us to provide the implementation of the member functions declared in the records.h header file.

Student::Student(int the_id, std::string the_name){ // This is the implementation of the constructor for the Student class. The constructor takes two parameters: the_id, which will be used to initialize the id data member, and the_name, which will be used to initialize the name data member. In the body of the constructor, we assign the values of the parameters to the corresponding data members of the class.
    id = the_id; // We assign the value of the_id to the id data member of the class. This initializes the id data member with the value passed to the constructor when an object of the Student class is created.
    name = the_name; // We assign the value of the_name to the name data member of the class. This initializes the name data member with the value passed to the constructor when an object of the Student class is created.
}
int Student::get_id() const{ // This is the implementation of the get_id member function for the Student class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the id data member, which represents the student's ID.
    return id; // We return the value of the id data member, which is the student's ID. This allows us to access the student's ID from outside the class using this member function.
}
std::string Student::get_name() const{ // This is the implementation of the get_name member function for the Student class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the name data member, which represents the student's name.
    return name; // We return the value of the name data member, which is the student's name. This allows us to access the student's name from outside the class using this member function.
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){ // This is the implementation of the constructor for the Course class. The constructor takes three parameters: the_id, which will be used to initialize the id data member, the_name, which will be used to initialize the name data member, and the_credits, which will be used to initialize the credits data member. In the body of the constructor, we assign the values of the parameters to the corresponding data members of the class.
    id = the_id; // We assign the value of the_id to the id data member of the class. This initializes the id data member with the value passed to the constructor when an object of the Course class is created.
    name = the_name; // We assign the value of the_name to the name data member of the class. This initializes the name data member with the value passed to the constructor when an object of the Course class is created.
    credits = the_credits; // We assign the value of the_credits to the credits data member of the class. This initializes the credits data member with the value passed to the constructor when an object of the Course class is created.
}
int Course::get_id() const{ // This is the implementation of the get_id member function for the Course class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the id data member, which represents the course's ID.
    return id; // We return the value of the id data member, which is the course's ID. This allows us to access the course's ID from outside the class using this member function.
}
std::string Course::get_name() const{ // This is the implementation of the get_name member function for the Course class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the name data member, which represents the course's name.
    return name; // We return the value of the name data member, which is the course's name. This allows us to access the course's name from outside the class using this member function.
}
int Course::get_credits() const{ // This is the implementation of the get_credits member function for the Course class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the credits data member, which represents the number of credits for the course.
    return credits; // We return the value of the credits data member, which is the number of credits for the course. This allows us to access the number of credits for the course from outside the class using this member function.
}


Grade::Grade(int sid, int cid, char grd){// This is the implementation of the constructor for the Grade class. The constructor takes three parameters: sid, which will be used to initialize the student_id data member, cid, which will be used to initialize the course_id data member, and grd, which will be used to initialize the grade data member. In the body of the constructor, we assign the values of the parameters to the corresponding data members of the class.
    student_id = sid; // We assign the value of sid to the student_id data member of the class. This initializes the student_id data member with the value passed to the constructor when an object of the Grade class is created.
    course_id = cid; // We assign the value of cid to the course_id data member of the class. This initializes the course_id data member with the value passed to the constructor when an object of the Grade class is created.
    grade = grd; // We assign the value of grd to the grade data member of the class. This initializes the grade data member with the value passed to the constructor when an object of the Grade class is created.
}
int Grade::get_student_id() const{ // This is the implementation of the get_student_id member function for the Grade class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the student_id data member, which represents the ID of the student associated with this grade.
    return student_id; // We return the value of the student_id data member, which is the ID of the student associated with this grade. This allows us to access the student's ID from outside the class using this member function.
}
int Grade::get_course_id() const{ // This is the implementation of the get_course_id member function for the Grade class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the course_id data member, which represents the ID of the course associated with this grade.
    return course_id; // We return the value of the course_id data member, which is the ID of the course associated with this grade. This allows us to access the course's ID from outside the class using this member function.
}
char Grade::get_grade() const{ // This is the implementation of the get_grade member function for the Grade class. This function is declared as const, which means that it does not modify any data members of the class. The function simply returns the value of the grade data member, which represents the letter grade (e.g., 'A', 'B', 'C', etc.) associated with this grade.
    return grade; // We return the value of the grade data member, which is the letter grade associated with this grade. This allows us to access the letter grade from outside the class using this member function.
}
