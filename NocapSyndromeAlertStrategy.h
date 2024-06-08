#include "AlertStrategy.h"
class NocapSyndromeAlertStrategy : public AlertStrategy {
	public:
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
};
