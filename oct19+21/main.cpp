//
// C++ Object lifetime and virtual method examples
//
// C++ allows variables that are actual objects
// themselves; the lifetime of those objects is 
// exactly the lifetime of the variable
// - global variables exist for the entire program
// - local variables exist for the execution of the
//   function
// - inner-scoped local variables exist for that scope
// - local and inner-scoped variables exist on the STACK
//
// C++ also has pointer variables; like all pointers,
// pointers to objects DO NOT include space for the 
// object itself, and do not create an object. 
//
// C++ has 'new', just like Java, that creates a new object
// (on the HEAP) and provides a pointer to the object.
// C++, unlike Java, does NOT have garbage collection; you
// must explicitly destroy HEAP objects using the 'delete'
// keyword.
//
#include <iostream>
#include "Dog.h"

// Gobal variable that IS an object, so it gets constructed
// before the program begins, and destructed after the program
// ends
Dog d2{"Ziva","grey",95}; // global OBJECT variable

// Example function demonstrating why we should always 
// pass objects by reference; in class we removed the "&"
// and showed that the parameter then is a REAL object, and
// that the argument object gets copied onto it, and it gets
// destroyed at the end of the function. This is ALMOST NEVER
// the behavior we want, so always use call-by-reference for
// objects.
void playWithDog(Dog& d)
{
   std::cout << "We're playing!\n";
   d.play();
   d.eat();
   // parens in next line are not needed but show the order
   // of evaluation for the operator << (left-right associativity)
   (((std::cout << "d is ") << d) << "\n");
}

// NOTE when the constructor and destructor is invoked
// for each object in this program; this shows you its
// lifetime
int main()
{
   int x{42};
   std::cout << "beginning main() x = " << x << "\n";
   Dog* dp1; // dp1 is a POINTER local variable
   Dog d1{"Zoe","grey",90};  // d1 is an OBJECT local variable
   std::cout << "Begin: fun with objects and object lifetimes\n";
   dp1 = new Dog{"Soba","tan",70}; // creates an object
   std::cout << "Dog addition: " << *dp1 + d1 << "\n";
   std::cout << "d1 is " << d1 << "\n";
   std::cout << "dp1 is " << *dp1 << "\n";
   playWithDog(d1); 
   std::cout << "d1 is " << d1 << "\n";
   d2.play();
   dp1->play();
   delete dp1;
   Pet* pet = new Dog{"Fido","brown",30};
   Pet* pet2 = new Pet{"Vladimir"};
   std::cout << "my pet: " << *pet << "\n";
   std::cout << "my pet2: " << *pet2 << "\n";
   std::cout << "End: testing object lifetimes\n";
   return 0;
}

