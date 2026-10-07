//
// C++ Object lifetime examples
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

Dog d2("Ziva","grey",95); // global OBJECT variable

// NOTE when the constructor and destructor is invoked
// for each object in this program; this shows you its
// lifetime
int main()
{
   Dog* dp1; // dp1 is a POINTER local variable
   Dog d1("Zoe","grey",90);  // d1 is an OBJECT local variable
   dp1 = new Dog("Soba","tan",70); // creates an object
   std::cout << "Begin: testing object lifetimes\n";
   std::cout << "d1 is " << d1 << "\n";
   std::cout << "dp1 is " << *dp1 << "\n";
   d1.play();
   d2.play();
   dp1->play();
   delete dp1;
   std::cout << "End: testing object lifetimes\n";
   return 0;
}

