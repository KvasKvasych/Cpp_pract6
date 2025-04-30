#pragma once
#include <string>
#include <vector>

using namespace std;

class Patient; 

class MedicalRecord {
private:
    Patient* patient;
    vector<string> records;

public:
    MedicalRecord(Patient* patient);

    void addRecord(const string& record);
    void updateRecord(int index, const string& newRecord);
    vector<string> getAllRecords() const;
    Patient* getPatient() const;
};