#include "AlertStrategy.h"

class TicctoccBrainDamageAlertStrategy : public AlertStrategy
{
public:
	TicctoccBrainDamageAlertStrategy(int age);
	AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* v) override;
private:
	int _age;
};