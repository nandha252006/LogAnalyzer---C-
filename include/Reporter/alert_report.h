#ifndef REPORT_H
#define REPORT_H

#include "Reporter/report.h"
class Alertreport :public Report{
    public:
    void report(const std::string& alert) override;
};
#endif