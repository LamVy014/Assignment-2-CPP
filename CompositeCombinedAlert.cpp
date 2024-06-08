#include "CompositeCombinedAlert.h"

void CompositeCombinedAlert::insertDisease(std::unique_ptr<AlertStrategy> strategy)
{
    diagnosis.push_back(std::move(strategy));
}

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