#pragma once  
#include <string>
#include <vector>


class Course;

class Student {
private:
    std::string name;
    std::string studentId;
    std::vector<Course*> courses;

public:
    Student(const std::string& name, const std::string& studentId);

    std::string getName() const;
    std::string getStudentId() const;
    std::vector<Course*> getCourses() const;

    void enrollCourse(Course* course);
    void dropCourse(Course* course);
};