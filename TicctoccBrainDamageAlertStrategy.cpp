#include "TicctoccBrainDamageAlertStrategy.h"
#include "Vitals.h"
#include "Patient.h"

//TicctoccBrainDamageAlertStrategy::TicctoccBrainDamageAlertStrategy(int age) {
//    _age = age;
//}

AlertLevel TicctoccBrainDamageAlertStrategy::calculateAlertLevel(const Patient* patient, const Vitals* v) {
    if ((_age < 35 && v->BA() < 30) || (_age >= 35 && v->BA() < 20)) {
        return AlertLevel::Red;
    }
    else {
        return AlertLevel::Green;
    }
}