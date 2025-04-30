#pragma once
#include <string>
#include "TeamMember.h"

using namespace std;

class TeamMember;

class Task {
private:
    string name;
    string description;
    string status;
    TeamMember* assignee;

public:
    Task(const string& name, const string& description);

    string getName() const;
    string getDescription() const;
    string getStatus() const;
    TeamMember* getAssignee() const;

    void setStatus(const string& newStatus);
    void setAssignee(TeamMember* member);
};

