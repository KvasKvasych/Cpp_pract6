#pragma once
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class Student; // Предварительное объявление
class Instructor; // Добавлено предварительное объявление для Instructor

class Course {
private:
    string name;
    string description;
    vector<Student*> students;
    Instructor* instructor;

public:
    Course(const string& name, const string& description)
        : name(name), description(description), instructor(nullptr) {
    }

    string getName() const;
    string getDescription() const;
    vector<Student*> getStudents() const;
    Instructor* getInstructor() const;

    void addStudent(Student* student);
    void removeStudent(Student* student);
    void setInstructor(Instructor* instructor);
};

