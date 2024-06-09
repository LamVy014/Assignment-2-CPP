#ifndef ALERTSTRATEGY_H
#define ALERTSTRATEGY_H

class Vitals;
class Patient;

#include "PatientAlertLevels.h"

// Strategy pattern
class AlertStrategy {
public:
    virtual ~AlertStrategy() = default;
    virtual AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) = 0;
};

#endif