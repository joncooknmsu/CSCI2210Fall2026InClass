
#include <iostream>

// everything in the pointers.c C program can be done 
// in C++, so here we go beyond it to introduce
// references. C++ has references, C does NOT

int main()
{
   int x, y;
   int* p;      // p is a pointer, currently unassigned
   int& r = y;  // r is a reference; r "refers" to y 
                // r is an "alias" of y at this point
                // references MUST BE assigned upon creation
   x = 42;
   y = 7;
   std::cout << "A: x=" << x << " y=" << y << "\n";
   p = &x; // now p points to x
   std::cout << "B: p=" << p << "\n";  // no dereference, so address prints 
   std::cout << "C: *p=" << *p << "\n";  // dereferenced, so int prints 
   std::cout << "D: r=" << r << "\n";  // references are implicitly dereferenced
   // the line below will cause a syntax error, because references 
   // ARE NOT pointers; the '*' operator cannot be used on them
   // You can uncomment it and try to compile it, but it won't work
   //std::cout << "*r=" << *r << "\n"; 
   p = &y; // pointers are variables, they can be reassigned
   std::cout << "E: p=" << p << " and *p=" << *p << "\n";
   //r = &x; // references CANNOT be reassigned (uncomment to try it out)
   return 0;
}


