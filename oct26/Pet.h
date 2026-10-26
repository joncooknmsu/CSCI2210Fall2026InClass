#include <string>
#include <iostream>

#ifndef PET_H
#define PET_H

class Pet
{
public:
   Pet(std::string name);
   ~Pet();
   virtual void sleep()=0;  // pure virtual functions mean
   virtual void play()=0;   // that Pet is an abstract
   virtual void eat()=0;    // class
   virtual std::string myOutput() const;
   friend std::ostream& operator<<(std::ostream& os, const Pet& pet);
protected:
   std::string name;
};

#endif

