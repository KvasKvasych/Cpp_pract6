#include "Doctor.h"
#include "Patient.h"
#include "Appointment.h"

Doctor::Doctor(const string& name, const string& specialization)
    : name(name), specialization(specialization) {
}

string Doctor::getName() const { return name; }
string Doctor::getSpecialization() const { return specialization; }
vector<Patient*> Doctor::getPatients() const { return patients; }
vector<Appointment*> Doctor::getAppointments() const { return appointments; }

void Doctor::addPatient(Patient* patient) {
    if (patient) {
        patients.push_back(patient);
    }
}

void Doctor::addAppointment(Appointment* appointment) {
    if (appointment) {
        appointments.push_back(appointment);
    }
}