#include "PatientDatabaseLoader.h"

#include <iomanip>
#include <sstream>

#include "Patient.h"
#include "Vitals.h"
#include "PatientFileLoader.h"


void PatientDatabaseLoader::initialiseConnection()
{
    // pretend this initialises a database connection
}

void PatientDatabaseLoader::loadPatients(std::vector<Patient*>& patientIn){

    // we simulate loading patients from a database here.

    // initialise a birthday from a string. This code can be reused to when loading a birthday from a file

    PatientFileLoader loader;
    std::vector<Patient*> patients = loader.loadPatientFile("patients.txt");
    for (auto patient:patients) {
        patientIn.push_back(patient);
    }

}

void PatientDatabaseLoader::closeConnection()
{
    // pretend this closes the database connection
}
