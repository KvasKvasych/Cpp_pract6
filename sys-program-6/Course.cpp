#include "Course.h"
#include "Student.h"
#include "Instructor.h"



string Course::getName() const {
    return name;
}

string Course::getDescription() const {
    return description;
}

vector<Student*> Course::getStudents() const {
    return students;
}

Instructor* Course::getInstructor() const {
    return instructor;
}

void Course::addStudent(Student* student) {
    students.push_back(student);
}

void Course::removeStudent(Student* student) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (*it == student) {
            students.erase(it);
            break;
        }
    }
}

void Course::setInstructor(Instructor* newInstructor) {
    instructor = newInstructor;
}
