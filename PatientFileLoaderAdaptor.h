#include "PatientFileLoader.h"
#include "AbstractPatientDatabaseLoader.h"

class PatientFileLoaderAdaptor : public AbstractPatientDatabaseLoader {
private:
    PatientFileLoader loader;
    std::string fileName = "patients.txt";
public:
    void initialiseConnection() override;

    void loadPatients(std::vector<Patient*>& patients) override;

    void closeConnection() override;
}; 
