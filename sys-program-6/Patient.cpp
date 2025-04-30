#include "Patient.h"
#include "MedicalRecord.h"
#include "Appointment.h"

Patient::Patient(const string& name, int age)
    : name(name), age(age), medicalRecord(new MedicalRecord(this)) {
}

string Patient::getName() const { return name; }
int Patient::getAge() const { return age; }
MedicalRecord* Patient::getMedicalRecord() const { return medicalRecord; }
vector<Appointment*> Patient::getAppointments() const { return appointments; }

void Patient::addAppointment(Appointment* appointment) {
    if (appointment) {
        appointments.push_back(appointment);
    }
}

void Patient::updateMedicalRecord(const string& newInfo) {
    if (medicalRecord) {
        medicalRecord->addRecord(newInfo);
    }
}