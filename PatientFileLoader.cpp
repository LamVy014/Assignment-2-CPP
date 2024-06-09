#include "PatientFileLoader.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#include "Patient.h"
#include "Vitals.h"

PatientFileLoader::PatientFileLoader(const std::string& file) {
    _file = file;
}

std::vector<Patient*> PatientFileLoader::loadPatientFile(const std::string& file) {
    std::vector<Patient*> patients;

    std::ifstream inFile(_file);
    if (inFile.is_open()) {
        // TODO: load your file here
        std::string line;
        while (std::getline(inFile, line)) {
            std::istringstream strs(line);
            std::string id, dob, names, diseases, readings;
            std::getline(strs, id, '/');
            std::getline(strs, dob, '/');
            std::getline(strs, names, '/');
            std::getline(strs, diseases, '/');
            std::getline(strs, readings, '/');

            std::vector<std::string> first_last_name{};
            std::stringstream n(names);
            std::string name;
            while (std::getline(n, names, ',')) {
                first_last_name.push_back(names);
            }
            
            std::tm t{};
            std::istringstream dobi(dob);
            dobi >> std::get_time(&t, "%d-%m-%Y");

            Patient* p = new Patient(first_last_name[1], first_last_name[0], t);
            
            std::stringstream d(diseases);
            std::string disease;
            while (std::getline(d,disease, ',')) {
                p->addDiagnosis(disease);
            }

            std::stringstream vi(readings);
            std::string reading;
            while (std::getline(vi, reading, ';')) {
                std::stringstream re(reading);
                
                int heartRate = 0, oxygenSaturation = 0, bodyTemperature = 0, brainActivity = 0;
                char delimiter;
                re >> heartRate >> delimiter >> oxygenSaturation >> delimiter >> bodyTemperature >> delimiter >> brainActivity;
                
                if (re.fail()) {
                    heartRate = 0;
                    oxygenSaturation = 0;
                    bodyTemperature = 0;
                    brainActivity = 0;
                }

                Vitals* v = new Vitals(heartRate, oxygenSaturation, bodyTemperature, brainActivity);
                p->addOldVitals(v);
            }

            patients.push_back(p);
        }

        inFile.close();
    }

    return patients;
}
