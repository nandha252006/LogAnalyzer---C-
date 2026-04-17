#ifndef DETECTOR_H
#define DETECTOR_H

#include "detector/detector.h"
class Errdetect: public Detector{
    public:
    bool detectline(const std::string& line) override;
};
#endif