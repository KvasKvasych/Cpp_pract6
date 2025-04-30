#pragma once
#include <string>
#include <vector>
#include <chrono>
#include "Task.h"

using namespace std;

class TeamMember;

class Project {
private:
    string name;
    string description;
    chrono::system_clock::time_point startDate;
    chrono::system_clock::time_point endDate;
    vector<Task*> tasks;

public:
    Project(const string& name, const string& description,
        const chrono::system_clock::time_point& startDate,
        const chrono::system_clock::time_point& endDate);

    string getName() const;
    string getDescription() const;
    chrono::system_clock::time_point getStartDate() const;
    chrono::system_clock::time_point getEndDate() const;
    vector<Task*> getTasks() const;

    void addTask(Task* task);
    void removeTask(Task* task);
    void updateTaskStatus(Task* task, const string& newStatus);
};;

