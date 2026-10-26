//
// Full "power of polymorphism" example, with both Dog 
// and Cat subclasses of abstract class Pet
//
#include <iostream>
#include <vector>
#include "Dog.h"
#include "Cat.h"

// Must be reference or else won't compile as long
// as Pet is abstract (if we make Pet non-abstract,
// it compiles and runs but LOSES polymorphic behavior)
void playWithpet(Pet& pet)
{
   std::cout << "We're playing!\n";
   pet.play();
   pet.eat();
   // parens in next line are not needed but show the order
   // of evaluation for the operator << (left-right associativity)
   (((std::cout << "pet is ") << pet) << "\n");
}

int main()
{
   std::cout << "This is our Pet Kennel\n";
   std::vector<Pet*> pets;
   pets.push_back(new Dog("Zoe", "grey", 90));
   pets.push_back(new Cat("Bebi", "tan", 8));
   pets.push_back(new Dog("Brody", "brown", 15));
   pets.push_back(new Dog("Skitz", "blue", 120));
   pets.push_back(new Cat("Gojo", "grey", 15));
   // AFTER HERE, code ONLY refers to Pets
   std::cout << "-----Print--------\n";
   for (Pet* pet : pets) {
      std::cout << *pet << "\n";
   }
   std::cout << "-----Play--------\n";
   for (int i = 0; i < pets.size(); i += 2) {
      playWithpet(*pets[i]);
   }
   std::cout << "-----Eat--------\n";
   for (int i = 2; i < pets.size(); i++) {
      pets[i]->eat();
   }
   std::cout << "-----Sleep--------\n";
   for (int i = 0; i < pets.size()-2; i++) {
      pets[i]->sleep();
   }
   std::cout << "-----Print--------\n";
   for (Pet* pet : pets) {
      std::cout << *pet << "\n";
   }
   return 0;
}

