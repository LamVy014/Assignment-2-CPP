#include "CompositeCombinedAlert.h"

// Insert disease strategy for patient
void CompositeCombinedAlert::insertDisease(std::unique_ptr<AlertStrategy> strategy)
{
    diagnosis.push_back(std::move(strategy));
}

// Loop through the Alert vector and detect the highest alert level
AlertLevel CompositeCombinedAlert::calculateAlertLevel(const Patient* patient, const Vitals* vitals) {
    AlertLevel currentAlertLevel = AlertLevel::Green;

    for (const auto& strategy : diagnosis) {
        AlertLevel alert = strategy->calculateAlertLevel(patient, vitals);

        if (alert > currentAlertLevel) {
            currentAlertLevel = alert;
        }
    }
    return currentAlertLevel;
}