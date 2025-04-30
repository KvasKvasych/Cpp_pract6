#include "Instructor.h"
#include "Course.h"


string Instructor::getName() const {
    return name;
}

string Instructor::getDepartment() const {
    return department;
}

vector<Course*> Instructor::getCourses() const {
    return courses;
}

void Instructor::assignCourse(Course* course) {
    courses.push_back(course);
    course->setInstructor(this);
}

void Instructor::removeCourse(Course* course) {
    for (auto it = courses.begin(); it != courses.end(); ++it) {
        if (*it == course) {
            courses.erase(it);
            course->setInstructor(nullptr);
            break;
        }
    }
}