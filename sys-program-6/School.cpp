#include "School.h"


void School::addCourse(Course* course) {
    courses.push_back(course);
}

void School::removeCourse(Course* course) {
    for (auto it = courses.begin(); it != courses.end(); ++it) {
        if (*it == course) {
            courses.erase(it);
            break;
        }
    }
}

void School::addStudent(Student* student) {
    students.push_back(student);
}

void School::removeStudent(Student* student) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (*it == student) {
            students.erase(it);
            break;
        }
    }
}

void School::addInstructor(Instructor* instructor) {
    instructors.push_back(instructor);
}

void School::removeInstructor(Instructor* instructor) {
    for (auto it = instructors.begin(); it != instructors.end(); ++it) {
        if (*it == instructor) {
            instructors.erase(it);
            break;
        }
    }
}

vector<Course*> School::getAllCourses() const {
    return courses;
}

vector<Student*> School::getAllStudents() const {
    return students;
}

vector<Instructor*> School::getAllInstructors() const {
    return instructors;
}