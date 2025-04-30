#include "MedicalRecord.h"
#include "Patient.h"

MedicalRecord::MedicalRecord(Patient* patient) : patient(patient) {}

void MedicalRecord::addRecord(const string& record) {
    records.push_back(record);
}

void MedicalRecord::updateRecord(int index, const string& newRecord) {
    if (index >= 0 && index < records.size()) {
        records[index] = newRecord;
    }
}

vector<string> MedicalRecord::getAllRecords() const {
    return records;
}

Patient* MedicalRecord::getPatient() const {
    return patient;
}