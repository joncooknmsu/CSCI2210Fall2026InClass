#include <string>
#include <iostream>

class Pet
{
public:
   Pet(std::string name);
   friend std::ostream& operator<<(std::ostream& os, const Pet& pet);
protected:
   std::string name;
};
