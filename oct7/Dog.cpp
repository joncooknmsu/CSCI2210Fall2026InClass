#include <iostream>
#include "Dog.h"

Dog::Dog(std::string name, std::string color, int weight)
{
   std::cout << "In Dog constructor for " << name << "\n";
   this->name = name;
   this->color = color;
   this->weight = weight;
   isHungry = false;
   isTired = false;
}

// Destructor for the Dog class
Dog::~Dog()
{
   std::cout << "Destroying the dog " << name << "\n";
}

std::ostream& operator<<(std::ostream& os, const Dog& dog)
{
   os << "I'm " << dog.name << " and big ";
   os << "and " << dog.color << " and ";
   os << "not tired and not hungry" << "!";
   return os;
}

void Dog::sleep()
{
   std::cout << name << " is sleeping\n";
}

void Dog::play()
{
   std::cout << name << " is playing\n";
}

void Dog::eat()
{
   std::cout << name << " is eating\n";
}
