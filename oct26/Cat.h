#include <string>
#include <iostream>
#include "Pet.h"

class Cat : public Pet
{
public:
   Cat(std::string name, std::string color, int weight);
   virtual void sleep();
   virtual void play();
   virtual void eat();
   virtual std::string myOutput() const;
   friend std::ostream& operator<<(std::ostream& os, const Cat& Cat);
private:
   int weight;
   std::string color;
   bool isHungry;
   bool isTired;
};
