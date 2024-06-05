#ifndef PATIENT_FILE_LOADER_H
#define PATIENT_FILE_LOADER_H

#include <string>
#include <vector>


// forward declare the patient class
class Patient;

class PatientFileLoader
{
public:
    PatientFileLoader() = default;
    PatientFileLoader(const std::string& file);

    // loads a list of patients from a file and returns a vector of those patients
    std::vector<Patient*> loadPatientFile(const std::string& file);

private:
    std::string _file;
};

#endif
