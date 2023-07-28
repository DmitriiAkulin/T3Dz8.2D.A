#include "exeption.h"

MyExeption::MyExeption(std::string message) :message{ message } {}

 std::string  MyExeption::getMessage()  { return message ; }