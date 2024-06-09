#include "NocapSyndromeAlertStrategy.h"
#include "Vitals.h"
#include "Patient.h"

AlertLevel NocapSyndromeAlertStrategy::calculateAlertLevel(const Patient* patient, const Vitals* v)
{
    if (v->SPO2() < 90) {
        return AlertLevel::Red;
    }

    else if (v->SPO2() < 92) {
        return AlertLevel::Orange;    
    }

    else if (v->SPO2() < 94) {
        return AlertLevel::Yellow;
    }

    else {
        return AlertLevel::Green;
    }
}