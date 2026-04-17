#include <string>
class Detector{
    public:
    virtual bool detectline(const std::string& line) = 0;
};