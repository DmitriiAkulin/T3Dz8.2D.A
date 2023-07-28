#pragma once
#include <string>
class MyExeption {
private:
std::string message;
public:
MyExeption(const std::string message);
  std::string  getMessage() ;
};