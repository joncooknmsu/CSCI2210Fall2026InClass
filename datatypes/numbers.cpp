
#include <iostream>

// a true global variable, same in C++ as in C
int m = -123;

int main(int argc, char** argv)
{
   unsigned int x = 42;
   
   std::cout << "This program mostly just prints the sizes\n"
                "in bytes of the different numeric datatypes.\n"
                "sizeof() is a built-in compile-time operator;\n"
                "it is NOT a library function!\n";
   std::cout << "x = " << x << " and m = " << m << "\n";
   std::cout << "the size of the variable x is "
             << sizeof(x) << " bytes\n";
   std::cout << "the size of a char is "
             << sizeof(char) << " bytes\n";
   std::cout << "the size of a short is "
             << sizeof(short) << " bytes\n";
   std::cout << "the size of an int is "
             << sizeof(int) << " bytes\n";
   std::cout << "the size of a long is "
             << sizeof(long) << " bytes\n";
   std::cout << "the size of a long long is "
             << sizeof(long long) << " bytes\n";
   float f = 99.35;
   double d = 123.44;
   std::cout << "f=" << f << " d=" << d << "\n";
   std::cout << "the size of a float is "
             << sizeof(float) << " bytes\n";
   std::cout << "the size of a double is "
             << sizeof(double) << " bytes\n";
   std::cout << "the size of a long double is "
             << sizeof(long double) << " bytes\n";
   float f2 = 99.25;
   f2 += 0.05;
   f2 += 0.05;
   std::cout << "f=" << f << " f2=" << f2 << "\n";
   if (f == f2) 
      std::cout << "f and f2 are equal!\n";
   else
      std::cout << "f and f2 are NOT equal!\n";
   std::cout << "lesson: NEVER test real values for equality!\n";
   return 0;
}

