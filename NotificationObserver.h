#include "Patient.h"

class NotificationObserver {
public:
    virtual void sendPatientNotif(Patient* patient) = 0;
};