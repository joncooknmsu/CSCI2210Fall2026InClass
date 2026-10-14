#include <iostream>
#include "Pet.h"

Pet::Pet(std::string name)
{
   std::cout << "In Pet constructor for " << name << "\n";
   this->name = name;
}

std::ostream& operator<<(std::ostream& os, const Pet& pet)
{
   os << "I'm " << pet.name << "!";
   return os;
}

