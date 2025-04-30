#include "Appointment.h"
#include "Patient.h"
#include "Doctor.h"

Appointment::Appointment(const chrono::system_clock::time_point& dateTime,
    Patient* patient, Doctor* doctor)
    : dateTime(dateTime), patient(patient), doctor(doctor) {
    if (patient) patient->addAppointment(this);
    if (doctor) doctor->addAppointment(this);
}

chrono::system_clock::time_point Appointment::getDateTime() const { return dateTime; }
Patient* Appointment::getPatient() const { return patient; }
Doctor* Appointment::getDoctor() const { return doctor; }

void Appointment::reschedule(const chrono::system_clock::time_point& newDateTime) {
    dateTime = newDateTime;
}