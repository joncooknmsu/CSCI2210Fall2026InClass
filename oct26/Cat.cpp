#include <iostream>
#include "Cat.h"

Cat::Cat(std::string name, std::string color, int weight)
        : Pet{name}, color{color}, weight{weight},
          isHungry{true}, isTired{false}
{
   std::cout << "In Cat constructor for " << name << "\n";
}

std::string Cat::myOutput() const
{
   std::string out{"I'm a cat and am "};
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

std::ostream& operator<<(std::ostream& os, const Cat& Cat)
{
   os << "(Cat <<) I'm " << Cat.name
      << " and " << Cat.color << " and "
      << "isHungry is " << Cat.isHungry << "!";
   return os;
}

void Cat::sleep()
{
   if (isTired) {
      std::cout << name << " is sleeping\n";
   }
}

void Cat::play()
{
   if (!isHungry) {
      std::cout << "cat " << name << " is playing\n";
      isHungry = true;
   } else {
      std::cout << name << " is in no shape to play\n";
   }
}

void Cat::eat()
{
   if (isHungry) {
      std::cout << name << " is eating\n";
      isHungry = false;
   } else {
      std::cout << name << " is not hungry\n";
   }
}
