#include "PatientFileLoader.h"
#include "AbstractPatientDatabaseLoader.h"

// Adaptor pattern
class PatientFileLoaderAdaptor : public AbstractPatientDatabaseLoader {
private:
    PatientFileLoader* loader;
    std::string fileName = "patients.txt";
public:
    PatientFileLoaderAdaptor();

    void initialiseConnection() override;

    void loadPatients(std::vector<Patient*>& patients) override;

    void closeConnection() override;
}; 
