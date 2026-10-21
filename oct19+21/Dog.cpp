#include <iostream>
#include "Dog.h"

Dog::Dog(std::string name, std::string color, int weight)
        : Pet{name}, color{color}, weight{weight},
          isHungry{true}, isTired{false}
{
   std::cout << "In Dog constructor for " << name << "\n";
}

// Destructor for the Dog class
Dog::~Dog()
{
   std::cout << "In Dog destructor for " << name << "\n";
}

std::string Dog::myOutput() const
{
   std::string out{"I'm "};
   out += name + " and ";
   if (weight > 50) out += "big ";
   else out += "small ";
   if (isHungry) out += "and is hungry ";
   else out += "and is not hungry ";
   if (isTired) out += "and is tired";
   else out += "and is not tired"; 
   // previously used std::to_string(isHungry) to include
   // the boolean flag in the return string 
   return out;
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
   os << "(Dog <<) I'm " << dog.name
      << " and " << dog.color << " and "
      << "isHungry is " << dog.isHungry << "!";
   return os;
}

int Dog::operator+(const Dog& other)
{
   std::cout << "(plus: I am " << name << " and other is " << other.name << ")";
   return weight + other.weight;
}


void Dog::sleep()
{
   if (isTired) {
      std::cout << name << " is sleeping\n";
      isTired = false;
   } else {
      std::cout << name << " is not tired\n";
   }
}

void Dog::play()
{
   if (!isTired && !isHungry) {
      std::cout << name << " is playing\n";
      isTired = true;
      isHungry = true;
   } else {
      std::cout << name << " is in no shape to play\n";
   }
}

void Dog::eat()
{
   if (isHungry) {
      std::cout << name << " is eating\n";
      isHungry = false;
   } else {
      std::cout << name << " is not hungry\n";
   }
}
