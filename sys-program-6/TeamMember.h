#pragma once
#include <string>
#include <vector>
#include "Task.h"

using namespace std;

class Task;

class TeamMember {
private:
    string name;
    string position;
    vector<Task*> assignedTasks;

public:
    TeamMember(const string& name, const string& position);

    string getName() const;
    string getPosition() const;
    vector<Task*> getAssignedTasks() const;

    void addTask(Task* task);
    void removeTask(Task* task);
};

