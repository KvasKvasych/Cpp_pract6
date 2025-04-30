#pragma once
#include <string>
#include <vector>

using namespace std;

class MedicalRecord; 
class Doctor;
class Appointment;

class Patient {
private:
    string name;
    int age;
    MedicalRecord* medicalRecord; 
    vector<Appointment*> appointments;

public:
    Patient(const string& name, int age);
    

    string getName() const;
    int getAge() const;
    MedicalRecord* getMedicalRecord() const;
    vector<Appointment*> getAppointments() const;

    void addAppointment(Appointment* appointment);
    void updateMedicalRecord(const string& newInfo);
};