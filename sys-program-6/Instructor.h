#include <string>
#include <vector>
#include "Course.h"

using namespace std;

class Course; 

class Instructor {
private:
    string name;
    string department;
    vector<Course*> courses;

public:
    Instructor(const string& name, const string& department)
        : name(name), department(department) {
    }

    string getName() const;
    string getDepartment() const;
    vector<Course*> getCourses() const;

    void assignCourse(Course* course);
    void removeCourse(Course* course);
};
