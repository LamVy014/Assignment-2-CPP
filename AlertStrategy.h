#include "Vitals.h"
#include "PatientAlertLevels.h"
#include "Patient.h"

class AlertStrategy {
public:
    virtual ~AlertStrategy() = default;
    virtual AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) = 0;
};