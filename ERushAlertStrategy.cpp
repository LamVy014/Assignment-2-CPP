#include "ERushAlertStrategy.h"

AlertLevel ERushAlertStrategy::calculateAlertLevel(const Patient* patient, const Vitals* v)
{
    if (v->BT() > 38 && v->BA() > 110) {
        return AlertLevel::Red;
    }

    else if (v->BT() > 38 && v->BA() > 100) {
        return AlertLevel::Yellow;
    }

    else {
        return AlertLevel::Green;
    }
}