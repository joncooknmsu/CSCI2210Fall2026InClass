
#include <stdio.h>

// Topical comment #1
// What is a variable? A variable is a named container that holds
// a value. What kind of value? In languages like 
// C/C++/Java it must be a value of the declared type of the
// variable. So an 'int' variable can hold an 'int' value, and so on.

// Topical comment #2
// A computer's memory can be thought of as one giant array. But
// instead of saying that we index it using indices, we say that
// we address it using addresses. A memory address is simply an
// index into the memory array. Because memory is large, memory
// addresses tend to be large values, and we usually print them
// out as hexadecimal (hex) values. 

// Function printArray: demonstrating that an array is passed
// by reference, actually passing a pointer that points to the
// array. The array parameter can be "int arr[]" or "int* arr",
// it IS THE SAME meaning. 
void printArray(int arr[], int size)
{
   int i=0;
   // array parameter sizeof is only 8 bytes because
   // IT IS A POINTER, not the array itself
   // note: this printf() will cause a warning but it
   //       will still work
   printf("size of arr: %ld\n", sizeof(arr));
   for (; i < size; i++) {
      printf("arr[%d] = %d\n", i, arr[i]);
   }
}

int main(int argc, char *argv[])
{
   int x, y;
   int* p;  // p is a POINTER variable that "points to" an int
            // p can hold a value that is a POINTER -- it CANNOT
            // hold an 'int' value! A pointer value is a memory
            // address.

   int a[10];  // an array of 10 ints
   int i;
   
   printf("size of a: %ld\n", sizeof(a)); // 10 ints == 40 bytes
   printf("size of p: %ld\n", sizeof(p)); // 1 pointer == 8 bytes
   
   // loops to initialize and print array a
   for (i=0; i < 10; i++)
      a[i] = i*3;
   for (i=0; i < 10; i++)
      printf("a[%d] = %d\n",i,a[i]);

   p = a;  // an array name IS a pointer constant (no need for &)

   // we can index a pointer just like an array
   for (i=0; i < 10; i++)
      printf("p[%d] = %d\n",i,p[i]); // pointer-array duality
   
   // we can also use '*' on the array name -- both of these
   // access a[0], the first element
   printf("*p=%d  *a=%d\n", *p, *a);

   // pass array by reference to function, and must include
   // a separate size parameter   
   printArray(a,10);
   
   // Prior class examples are below here
   
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


