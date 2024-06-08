#include "AlertStrategy.h"
class AmogusSusAlertStrategy : public AlertStrategy {
public:
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
}; 
