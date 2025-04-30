#pragma once
#include <string>
#include <chrono>
#include "Patient.h"
#include "Doctor.h"

using namespace std;

class Patient;
class Doctor;

class Appointment {
private:
    chrono::system_clock::time_point dateTime;
    Patient* patient;
    Doctor* doctor;

public:
    Appointment(const chrono::system_clock::time_point& dateTime,
        Patient* patient, Doctor* doctor);

    chrono::system_clock::time_point getDateTime() const;
    Patient* getPatient() const;
    Doctor* getDoctor() const;

    void reschedule(const chrono::system_clock::time_point& newDateTime);
};