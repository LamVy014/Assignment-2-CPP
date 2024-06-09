#ifndef AMOGUS_SUS_STRATEGY_H
#define AMOGUS_SUS_STRATEGY_H

#include "AlertStrategy.h"
class AmogusSusAlertStrategy : public AlertStrategy {
public:
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
}; 

#endif