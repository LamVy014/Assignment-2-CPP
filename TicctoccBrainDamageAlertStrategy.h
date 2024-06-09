#ifndef TICCTOCC_BRAIN_DAMAGE_ALERT_STRATEGY_H
#define TICCTOCC_BRAIN_DAMAGE_ALERT_STRATEGY_H

#include "AlertStrategy.h"
#include "Vitals.h"
#include "Patient.h"

class TicctoccBrainDamageAlertStrategy : public AlertStrategy {
public:
    TicctoccBrainDamageAlertStrategy(int age);
    AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;

private:
    int _age;
};

#endif 