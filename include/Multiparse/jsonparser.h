#pragma once
#include "multiparse.h"
#include <regex>
#include <fstream>

class Jsonparser : public Multiparse{
  public:
  void jsonparse(std::ifstream &log) ;
  std::string logentry() override{
    return "";
  }
};