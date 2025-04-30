#include "Task.h"
#include "TeamMember.h"

Task::Task(const string& name, const string& description)
    : name(name), description(description), status("Не начат"), assignee(nullptr) {
}

string Task::getName() const { return name; }
string Task::getDescription() const { return description; }
string Task::getStatus() const { return status; }
TeamMember* Task::getAssignee() const { return assignee; }

void Task::setStatus(const string& newStatus) { status = newStatus; }

void Task::setAssignee(TeamMember* member) {
    if (assignee) assignee->removeTask(this);
    assignee = member;
    if (assignee) assignee->addTask(this);
}