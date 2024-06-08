#include "AmogusSusAlertStrategy.h"

AlertLevel AmogusSusAlertStrategy::calculateAlertLevel(const Patient* patient, const Vitals* v)
{
    if (v->HR() < 220) {
        return AlertLevel::Red;
    }

    else if (v->HR() < 210) {
        return AlertLevel::Orange;
    }

    else if (v->HR() < 200) {
        return AlertLevel::Yellow;
    }

    else {
        return AlertLevel::Green;
    }
}