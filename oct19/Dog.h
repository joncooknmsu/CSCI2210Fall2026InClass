#include <string>
#include <iostream>
#include "Pet.h"

class Dog : public Pet
{
public:
   Dog(std::string name, std::string color, int weight);
   ~Dog(); // destructor
   int operator+(const Dog& other);
   void sleep();
   void play();
   void eat();
   virtual std::string myOutput() const;
   friend std::ostream& operator<<(std::ostream& os, const Dog& dog);
private:
   int weight;
   std::string color;
   bool isHungry;
   bool isTired;
};
