#ifndef NOCAP_SYNDROME_ALERT_STRATEGY_H
#define NOCAP_SYNDROME_ALERT_STRATEGY_H

#include "AlertStrategy.h"
class NocapSyndromeAlertStrategy : public AlertStrategy {
	public:
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
};

#endif	