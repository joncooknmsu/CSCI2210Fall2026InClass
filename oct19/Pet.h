#include <string>
#include <iostream>

class Pet
{
public:
   Pet(std::string name);
   ~Pet();
   virtual std::string myOutput() const;
   friend std::ostream& operator<<(std::ostream& os, const Pet& pet);
protected:
   std::string name;
};
