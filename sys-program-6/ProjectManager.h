#pragma once
#include <vector>
#include "Project.h"

using namespace std;

class ProjectManager {
private:
    vector<Project*> projects;

public:
    ~ProjectManager();

    void addProject(Project* project);
    void removeProject(Project* project);

    void addTaskToProject(Project* project, Task* task);
    void removeTaskFromProject(Project* project, Task* task);
    void updateTaskInProject(Project* project, Task* task, const string& newStatus);

    vector<Project*> getAllProjects() const;
};
