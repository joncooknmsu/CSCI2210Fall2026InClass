
#include <stdio.h>

// What is a variable? A variable is a named container that holds
// a value. What kind of value? In languages like 
// C/C++/Java it must be a value of the declared type of the
// variable. So an 'int' variable can hold an 'int' value, and so on.

// A computer's memory can be thought of as one giant array. But
// instead of saying that we index it using indices, we say that
// we address it using addresses. A memory address is simply an
// index into the memory array. Because memory is large, memory
// addresses tend to be large values, and we usually print them
// out as hexadecimal (hex) values. 

int main()
{
   int x, y;
   int* p;  // p is a POINTER variable that "points to" an int
            // p can hold a value that is a POINTER -- it CANNOT
            // hold an 'int' value! A pointer value is a memory
            // address.
   x = 42;
   y = 7;
   printf("A: x=%d y=%d\n",x,y);

   p = &y;  // p now contains the value that is the address of y
            // p "refers" to y at this point in the program
            // p is an "alias" of y at this point

   printf("B: p=%p\n",p);  // %p == "print pointer in hex format"
   // to get to what a pointer points to we have to use the
   // '*' operator on it; * is the derefencing operator, it 
   // "follows the pointer to what it is pointing at"
   printf("C: *p=%d\n",*p);

   // because p is pointing at y, we have two ways of  
   // referring to y:
   y = y + *p;
   printf("D: y=%d  *p=%d\n",y,*p);

   // we can also use *p on the assignment side
   *p = x + 33;
   printf("E: y=%d  *p=%d\n",y,*p);

   // pointers are variables: they can change values
   p = &x;
   printf("F: p=%p  *p=%d\n",p,*p);
   
   return 0;
}


