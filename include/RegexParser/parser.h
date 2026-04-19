#include <string>
class Parser{
    public:
    virtual std::string parseline(const std::string& raw) = 0;
};