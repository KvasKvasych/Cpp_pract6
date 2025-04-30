#include <vector>
#include "Course.h"
#include "Student.h"
#include "Instructor.h"

using namespace std;

class School {
private:
    vector<Course*> courses;
    vector<Student*> students;
    vector<Instructor*> instructors;

public:
    

    void addCourse(Course* course);
    void removeCourse(Course* course);
    void addStudent(Student* student);
    void removeStudent(Student* student);
    void addInstructor(Instructor* instructor);
    void removeInstructor(Instructor* instructor);

    vector<Course*> getAllCourses() const;
    vector<Student*> getAllStudents() const;
    vector<Instructor*> getAllInstructors() const;
};

