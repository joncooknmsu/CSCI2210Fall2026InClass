//
// C++ memory allocation example
//
#include <iostream>

int main(int argc, char* argv[])
{
   int* p;
   int i;
   // "new" is a built-in operator and is type-safe -- the
   // compiler checks to make sure the right hand side agrees
   // with the type of pointer on the left hand side
   p = new int[1000]; 
   for (i=0; i < 1000; i++)
      p[i] = i * 3;
   for (i=0; i < 1000; i++) {
      std::cout << "p[" << i << "]=" << p[i] << "   ";
   }
   std::cout << "\n";
   delete p;  // gives memory back to the OS
   return 0;
}


