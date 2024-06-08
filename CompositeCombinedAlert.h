#include <vector>
#include <memory>
#include "AlertStrategy.h"


class CompositeCombinedAlert : public AlertStrategy {
public:
    void insertDisease(std::unique_ptr<AlertStrategy> strategy);
    AlertLevel calculateAlertLevel(const Patient* patient, const Vitals* vitals) override;
private:
    std::vector<std::unique_ptr<AlertStrategy>> diagnosis;
};
