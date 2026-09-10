
#include <stdio.h>

// a true global variable, it is referred to simply
// as "m" in the entire program; you should NOT use
// global variables regularly!
int m = -123;  

int main(int argc, char** argv)
{
   // a local variable "x"; local variables only
   // exist while a function/method is executing;
   // they are created and allocated on THE STACK
   unsigned int x = 42;  // C/C++ have both regular (signed)
                         // integer types, and unsigned versions
   // printf is the C library "formatted printing" function
   printf("x = %u (hex %x)\n",x,x);  // %u == unsigned decimal
   printf("m = %d (hex %x)\n",m,m);  // %d == signed decimal
   // C/C++ allow you to mix and match these types -- you
   // MUST BE CAREFUL to make sure your computations will work out!
   x = x + m;
   printf("after adding m to x:\n");
   printf("x = %u (hex %x)\n",x,x);
   printf("after setting m to x+12:\n");
   m = x + 12;
   printf("m = %d (hex %x)\n",m,m);
   return 0;
}

