#include <string>
#include <iostream>

class Dog
{
public:
   Dog(std::string name, std::string color, int weight);
   ~Dog(); // destructor
   void sleep();
   void play();
   void eat();
   friend std::ostream& operator<<(std::ostream& os, const Dog& dog);
private:
   int weight;
   std::string name;
   std::string color;
   bool isHungry;
   bool isTired;
};
