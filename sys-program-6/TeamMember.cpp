#include "TeamMember.h"
#include "Task.h"

TeamMember::TeamMember(const string& name, const string& position)
    : name(name), position(position) {
}

string TeamMember::getName() const { return name; }
string TeamMember::getPosition() const { return position; }
vector<Task*> TeamMember::getAssignedTasks() const { return assignedTasks; }

void TeamMember::addTask(Task* task) {
    if (task) assignedTasks.push_back(task);
}

void TeamMember::removeTask(Task* task) {
    for (auto it = assignedTasks.begin(); it != assignedTasks.end(); ) {
        if (*it == task) it = assignedTasks.erase(it);
        else ++it;
    }
}