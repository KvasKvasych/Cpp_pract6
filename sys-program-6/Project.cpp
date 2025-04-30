#include "Project.h"
#include "Task.h"

Project::Project(const string& name, const string& description,
    const chrono::system_clock::time_point& startDate,
    const chrono::system_clock::time_point& endDate)
    : name(name), description(description) {
}

string Project::getName() const { return name; }
string Project::getDescription() const { return description; }
chrono::system_clock::time_point Project::getStartDate() const { return startDate; }
chrono::system_clock::time_point Project::getEndDate() const { return endDate; }
vector<Task*> Project::getTasks() const { return tasks; }

void Project::addTask(Task* task) {
    if (task) tasks.push_back(task);
}

void Project::removeTask(Task* task) {
    for (auto it = tasks.begin(); it != tasks.end(); ) {
        if (*it == task) it = tasks.erase(it);
        else ++it;
    }
}

void Project::updateTaskStatus(Task* task, const string& newStatus) {
    if (task) task->setStatus(newStatus);
}