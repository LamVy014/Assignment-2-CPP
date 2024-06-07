#include "PatientFileLoaderAdaptor.h"
#include "PatientFileLoader.h"

void PatientFileLoaderAdaptor::initialiseConnection() {

}

void PatientFileLoaderAdaptor::loadPatients(std::vector<Patient*>& patients) {
	patients = loader.loadPatientFile(fileName);
}

void PatientFileLoaderAdaptor::closeConnection() {

}