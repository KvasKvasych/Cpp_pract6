#include "Student.h"
#include "Course.h"  

Student::Student(const std::string& name, const std::string& studentId)
    : name(name), studentId(studentId) {
}

std::string Student::getName() const {
    return name;
}

std::string Student::getStudentId() const {
    return studentId;
}

std::vector<Course*> Student::getCourses() const {
    return courses;
}

void Student::enrollCourse(Course* course) {
    if (course) {
        courses.push_back(course);
    }
}

void Student::dropCourse(Course* course) {
    for (auto it = courses.begin(); it != courses.end(); ) {
        if (*it == course) {
            it = courses.erase(it);
        }
        else {
            ++it;
        }
    }
}