#include "ProjectManager.h"
#include "Project.h"
#include "Task.h"

ProjectManager::~ProjectManager() {
    for (auto project : projects) delete project;
}

void ProjectManager::addProject(Project* project) {
    if (project) projects.push_back(project);
}

void ProjectManager::removeProject(Project* project) {
    for (auto it = projects.begin(); it != projects.end(); ) {
        if (*it == project) {
            it = projects.erase(it);
            delete project;
        }
        else ++it;
    }
}

void ProjectManager::addTaskToProject(Project* project, Task* task) {
    if (project && task) project->addTask(task);
}

void ProjectManager::removeTaskFromProject(Project* project, Task* task) {
    if (project && task) project->removeTask(task);
}

void ProjectManager::updateTaskInProject(Project* project, Task* task, const string& newStatus) {
    if (project && task) project->updateTaskStatus(task, newStatus);
}

vector<Project*> ProjectManager::getAllProjects() const { return projects; }