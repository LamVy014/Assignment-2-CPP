#ifndef E_RUSH_ALERT_STRATEGY_H
#define E_RUSH_ALERT_STRATEGY_H

#include "AlertStrategy.h"
class ERushAlertStrategy : public AlertStrategy {
public:
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
};

#endif