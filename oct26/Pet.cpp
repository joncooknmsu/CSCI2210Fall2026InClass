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

/***
// uncomment these and remove the "=0" in the header
// to make Pet a non-abstract class
void Pet::sleep()
{
   std::cout << "Pet " + name + " is sleeping.";
}
void Pet::play()
{
   std::cout << "Pet " + name + " is playing.";
}
void Pet::eat()
{
   std::cout << "Pet " + name + " is eating.";
}
***/

std::string Pet::myOutput() const
{
   return "I'm " + name + "!";
}

std::ostream& operator<<(std::ostream& os, const Pet& pet)
{
   os << "(Pet <<) " << pet.myOutput();
   return os;
}

