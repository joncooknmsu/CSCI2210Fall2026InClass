//
// Plain C memory allocation example
//
#include <stdio.h>
#include <stdlib.h>  // needed for malloc/free

int main(int argc, char* argv[])
{
   int* p;
   int i;
   // "(int*)" is known as typecasting
   p = (int*) malloc(1000*sizeof(int));
   // I now have p pointing at a many-element int array in the HEAP
   for (i=0; i < 1000; i++)
      p[i] = i * 3;
   for (i=0; i < 1000; i++) {
      printf("p[%d]=%d   ",i,p[i]);
   }
   printf("\n");
   free(p); // gives the array memory back to the OS
   return 0;
}

