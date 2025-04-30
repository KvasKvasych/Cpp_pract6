#pragma once
#include <string>
#include <vector>
#include "Patient.h"

using namespace std;

class Patient;
class Appointment;

class Doctor {
private:
    string name;
    string specialization;
    vector<Patient*> patients;
    vector<Appointment*> appointments;

public:
    Doctor(const string& name, const string& specialization);

    string getName() const;
    string getSpecialization() const;
    vector<Patient*> getPatients() const;
    vector<Appointment*> getAppointments() const;

    void addPatient(Patient* patient);
    void addAppointment(Appointment* appointment);
};