#include "AlertStrategy.h"
class ERushAlertStrategy : public AlertStrategy {
public:
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
};
