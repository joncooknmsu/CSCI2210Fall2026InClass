#include <iostream>
#include "Pet.h"

Pet::Pet(std::string name)
{
   std::cout << "In Pet constructor for " << name << "\n";
   this->name = name;
}

Pet::~Pet()
{
   std::cout << "In Pet destructor for " << name << "\n";
}

std::string Pet::myOutput() const
{
   return "I'm " + name + "!";
}

std::ostream& operator<<(std::ostream& os, const Pet& pet)
{
   os << "(Pet <<) " << pet.myOutput();
   return os;
}

